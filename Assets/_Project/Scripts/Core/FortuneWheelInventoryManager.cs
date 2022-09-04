using DG.Tweening;
using System.Collections.Generic;
using UnityEngine;

namespace FortuneWheel.Inventory
{
    public class FortuneWheelInventoryManager : MonoBehaviour
    {
        [SerializeField] private WheelRewardInventorySettingsSO wheelRewardInventory;
        [SerializeField] private List<RewardPanelSlot> rewardPanelSlotsList = new List<RewardPanelSlot>();
        public void UpdateRewardPanelInventory()
        {
            for (int i = 0; i < rewardPanelSlotsList.Count; i++)
            {
                if (wheelRewardInventory.inventorySlots[i]._rewardAmount > 0)
                {
                    ActiveInventorySlot(i);

                }
                else
                {
                    DisableInventorySlot(i);
                }
            }
        }
        private void ActiveInventorySlot(int i)
        {
            rewardPanelSlotsList[i].gameObject.SetActive(true);
            rewardPanelSlotsList[i].gameObject.transform.DOScale(Vector2.one, .5f).SetLink(rewardPanelSlotsList[i].gameObject, LinkBehaviour.KillOnDestroy);

            rewardPanelSlotsList[i].rewardImage.sprite = wheelRewardInventory.inventorySlots[i]._reward.sprite;
            rewardPanelSlotsList[i].rewardAmountText.SetText(wheelRewardInventory.inventorySlots[i]._rewardAmount.ToString());
        }
        private void DisableInventorySlot(int i)
        {
            rewardPanelSlotsList[i].gameObject.transform.localScale = Vector2.zero;
            rewardPanelSlotsList[i].gameObject.SetActive(false);
        }
    }
}
