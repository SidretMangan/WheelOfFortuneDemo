using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections.Generic;
using TMPro;
using FortuneWheel.Slots;
using FortuneWheel.Inventory;
using FortuneWheel.PathBar;
using FortuneWheel.EventSystemInput;
using DG.Tweening;
using Cysharp.Threading.Tasks;
using System;
using Random = UnityEngine.Random;

namespace FortuneWheel.Wheel
{
    public class FortuneWheelManager : MonoBehaviour
    {
        [Header("Lists")]
        public List<RewardDataSO> rewardDataList;
        public List<RewardWheelSlot> rewardWheelSlotList;
        public List<RewardPathValue> rewardPathValueList;
        public List<RewardDataSO> superRewardDataList;

        [Header("Connections")]
        [SerializeField] private FortuneWheelInventoryManager fortuneWheelInventoryManager;
        [SerializeField] private WheelRewardInventorySettingsSO playerInventory;
        [SerializeField] private float _spinDuration;

        [Space]

        [Header("Wheel Properties")]
        [SerializeField] private Transform _wheelTransform;
        [SerializeField] private Image _wheelImage;
        [SerializeField] private Image _indicatorImage;
        [SerializeField] private CanvasGroup _wheelCanvasGroup;
        [SerializeField] private Sprite _wheelSilverSprite;
        [SerializeField] private Sprite _wheelBronzeSprite;
        [SerializeField] private Sprite _wheelGoldSprite;
        [SerializeField] private Sprite _indicatorSilverSprite;
        [SerializeField] private Sprite _indicatorGoldSprite;
        [SerializeField] private Sprite _indicatorBronzeSprite;
        [SerializeField] private Transform _startRewardsPosition;
        [SerializeField] private Image _rewardsMoveRewardsPanelImage;

        [Space]

        [Header("Connections")]
        [SerializeField] private int _bombChanceRate;
        [SerializeField] private GameObject _quitPanel;
        [SerializeField] private GameObject _bombLosePanel;
        [SerializeField] private GameObject _allRewardsCollectedPanel;
        [SerializeField] private TextMeshProUGUI _allRewardsCollectedPanelText;

        [SerializeField] private Transform _inventoryPosition;

        [Space]

        [Header("Buttons")]
        [SerializeField] private PremiumCurrencyContinueButton _premiumCurrencyContinueButton;
        [SerializeField] private ReturnButton _returnButton;
        [SerializeField] private RewardsPanelCollectButton _rewardsPanelCollectButton;
        [SerializeField] private SpinButton _spinButton;

        #region Variables
        private bool _isSpinning;
        private int _angle;
        private int _initialIndex;
        private int _pathValue = 1;
        private int _randomNumber;
        #endregion

        void Start()
        {
            ClearRewardsInventorySlots();
            fortuneWheelInventoryManager.UpdateRewardPanelInventory();
            ChangeSlots().Forget();
            _isSpinning = false;
        }

        #region Change wheel and its' slots
        private async UniTaskVoid ChangeSlots()
        {
            _randomNumber = Random.Range(0, 101);

            if (_randomNumber < _bombChanceRate)
            {
                _angle = -1 * 45 * 32;
            }
            else
            {
                _angle = -1 * 45 * Random.Range(33, 40);
            }
            SetRewardsForWheelSlots();
            if (_pathValue % 30 == 0)
            {
                await _wheelCanvasGroup.DOFade(0, 0.5f);
                _wheelImage.sprite = _wheelGoldSprite;
                _indicatorImage.sprite = _indicatorGoldSprite;
                await _wheelCanvasGroup.DOFade(1, 1);

            }
            else if (_pathValue % 5 == 0)
            {
                await _wheelCanvasGroup.DOFade(0, 0.5f);
                _wheelImage.sprite = _wheelSilverSprite;
                _indicatorImage.sprite = _indicatorSilverSprite;
                await _wheelCanvasGroup.DOFade(1, 1);
            }
            else if (_pathValue > 1)
            {
                await _wheelCanvasGroup.DOFade(0, 0.5f);
                _wheelImage.sprite = _wheelBronzeSprite;
                _indicatorImage.sprite = _indicatorBronzeSprite;
                await _wheelCanvasGroup.DOFade(1, 1);
            }

            await UniTask.Delay(TimeSpan.FromSeconds(0.5f), ignoreTimeScale: false);
            _spinButton.GetInteractable();
        }

        private void SetRewardsForWheelSlots()
        {
            if (_pathValue % 5 == 0 || _pathValue == 1)
            {
                for (int i = 0; i < rewardWheelSlotList.Count; i++)
                {
                    int j = Random.Range(1, rewardDataList.Count);
                    rewardWheelSlotList[i].reward = rewardDataList[j];
                    SetRewardAndIncreasePerPathValue(i);
                }
            }
            else if (_pathValue % 30 == 0)
            {
                for (int i = 0; i < rewardWheelSlotList.Count; i++)
                {
                    int j = Random.Range(0, superRewardDataList.Count);
                    rewardWheelSlotList[i].reward = superRewardDataList[j];
                    SetRewardAndIncreasePerPathValue(i);
                }
            }
            else
            {
                for (int i = 0; i < rewardWheelSlotList.Count; i++)
                {
                    if (i == 0)
                    {
                        rewardWheelSlotList[i].reward = rewardDataList[0];//Bomb index
                        rewardWheelSlotList[i].SetItem();
                    }
                    else
                    {
                        int j = Random.Range(1, rewardDataList.Count);
                        rewardWheelSlotList[i].reward = rewardDataList[j];
                        SetRewardAndIncreasePerPathValue(i);
                    }
                }
            }
        }

        private void SetRewardAndIncreasePerPathValue(int i)
        {
            rewardWheelSlotList[i].reward.amount += Mathf.RoundToInt(_pathValue / 10);
            rewardWheelSlotList[i].SetItem();
            rewardWheelSlotList[i].reward.amount -= Mathf.RoundToInt(_pathValue / 10);
        }
        #endregion
        #region Spin wheel
        public void SpinButton()
        {
            if (!_isSpinning)
            {
                SpinTheWheel(_angle, _spinDuration).Forget();
            }
        }
        private async UniTaskVoid SpinTheWheel(float endValue, float duration)
        {
            _isSpinning = true;
            await _wheelTransform.DORotate(new Vector3(0, 0, endValue), duration, RotateMode.FastBeyond360).SetEase(Ease.OutBack, .5f);
            _wheelTransform.eulerAngles = new Vector3(0.0f, 0.0f, endValue);
            AfterSpinCheck();
            await UniTask.Delay(TimeSpan.FromSeconds(1), ignoreTimeScale: false);
            if (_bombChanceRate < 45)
            {
                _bombChanceRate += 2;
            }

            _pathValue++;
            for (int i = 0; i < rewardPathValueList.Count; i++)
            {
                rewardPathValueList[i].SetPosition(_pathValue);
            }

            ChangeSlots().Forget();
            _isSpinning = false;

        }
        private async void AfterSpinCheck()
        {
            int currentIndex = CalculateIndicatorShowsSlotIndex();
            if (rewardWheelSlotList[currentIndex].reward.rewardType == RewardType.Bomb)
            {
                OpenBombLosePanel();
            }
            else
            {
                rewardWheelSlotList[currentIndex].reward.amount += _pathValue / 10;
                playerInventory.AddRewardToInventory(rewardWheelSlotList[currentIndex].reward);
                rewardWheelSlotList[currentIndex].reward.amount -= _pathValue / 10;

                _rewardsMoveRewardsPanelImage.sprite = rewardWheelSlotList[currentIndex].reward.sprite;
                _rewardsMoveRewardsPanelImage.transform.position = _startRewardsPosition.transform.position;
                _rewardsMoveRewardsPanelImage.color = Color.white;
                var ct = this.GetCancellationTokenOnDestroy();
                await UniTask.WhenAll(
                    _rewardsMoveRewardsPanelImage.transform.DOMove(
                    (new Vector2(_rewardsMoveRewardsPanelImage.transform.position.x + Random.Range(50, 100), _rewardsMoveRewardsPanelImage.transform.position.y + Random.Range(50, 100))), 1f).WithCancellation(ct),
                    _rewardsMoveRewardsPanelImage.transform.DOScale(Vector2.one, 1f).WithCancellation(ct)
                    );
                await _rewardsMoveRewardsPanelImage.transform.DOMove(_inventoryPosition.position, 1);
                await UniTask.WhenAll(
                    _rewardsMoveRewardsPanelImage.transform.DOScale(Vector2.zero, .2f).WithCancellation(ct),
                    _rewardsMoveRewardsPanelImage.DOFade(0, .2f).WithCancellation(ct)
                    );
                fortuneWheelInventoryManager.UpdateRewardPanelInventory();
            }
        }
        private int CalculateIndicatorShowsSlotIndex()
        {
            int mainAngle = (int)(_angle) % 360;
            int splitValue = (int)mainAngle / 45;
            int currentIndex = ((_initialIndex - splitValue) + 8) % 8;
            return currentIndex;
        }
        #endregion
        private void ClearRewardsInventorySlots()
        {
            foreach (var slot in playerInventory.inventorySlots)
            {
                slot._reward = null;
                slot._rewardAmount = 0;
            }
        }
        private void OpenBombLosePanel()
        {
            _bombLosePanel.SetActive(true);
        }
        private void OpenEndPanel(string message)
        {
            if (message != "")
            {
                _allRewardsCollectedPanelText.SetText(message);
            }
            _allRewardsCollectedPanel.SetActive(true);
        }
        #region Buttons Connected Methods
        public void AllRewardsCollectButton()
        {
            OpenEndPanel("");
            _quitPanel.SetActive(false);
        }
        public void PremiumCurrencyContinueButton()
        {
            _bombLosePanel.SetActive(false);
            _premiumCurrencyContinueButton.GetInteractable();
        }
        public void QuitButton()
        {
            OpenEndPanel("All Rewards were lost");
            _bombLosePanel.SetActive(false);
        }
        public void ReturnButton()
        {
            _quitPanel.SetActive(false);
            _rewardsPanelCollectButton.GetInteractable();
            _returnButton.GetInteractable();
        }
        public void RewardsPanelCollectButton()
        {
            _quitPanel.SetActive(true);
        }
        public void TryAgainButton()
        {
            SceneManager.LoadScene(0);
        }
        #endregion
    }
}
