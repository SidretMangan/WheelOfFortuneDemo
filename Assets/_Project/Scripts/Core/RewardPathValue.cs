using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

namespace FortuneWheel.PathBar
{
    public class RewardPathValue : MonoBehaviour
    {
        [Header("Path Connections")]
        [SerializeField] private Sprite _greenBackground;
        [SerializeField] private Sprite _blueBackground;
        [SerializeField] private Image _image;
        [SerializeField] private TextMeshProUGUI _levelText;
        [SerializeField] private Image _currentPathValueImage;
        [SerializeField] private TextMeshProUGUI _currentPathValueText;
        [Space]
        [Header("Path Bar Positions")]
        [SerializeField] private RectTransform _rectTransform;
        [SerializeField] private RectTransform _endPoint;
        [SerializeField] private RectTransform _startPoint;
        [SerializeField] private RectTransform _midPoint;


        public void SetPosition(int _pathValue)
        {
            SetNewPositionValues(_pathValue);
            MoveNewPositionWithNewValues(_pathValue);
        }
        private void SetNewPositionValues(int _pathValue)
        {
            if (_rectTransform.transform.position.x <= _endPoint.transform.position.x)
            {
                _rectTransform.anchoredPosition = _startPoint.anchoredPosition;
                _levelText.SetText((3 + _pathValue).ToString());
                if ((3 + _pathValue) % 5 == 0)
                {
                    _image.sprite = _greenBackground;
                }
                else
                {
                    _image.sprite = _blueBackground;

                }
            }
        }
        private void MoveNewPositionWithNewValues(int _pathValue)
        {
            _rectTransform.DOAnchorPosX(_rectTransform.anchoredPosition.x - 125, .5f).SetLink(_rectTransform.gameObject, LinkBehaviour.KillOnDestroy).OnComplete(() =>
            {
                if (_rectTransform.transform.position.x >= _midPoint.transform.position.x - 72.5f && _rectTransform.transform.position.x <= _midPoint.transform.position.x + 72.5f)
                {
                    _currentPathValueImage.sprite = _image.sprite;
                    _currentPathValueText.SetText(_pathValue.ToString());
                }
            });
        }
    }
}
