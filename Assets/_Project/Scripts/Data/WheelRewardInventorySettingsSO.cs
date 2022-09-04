using System.Collections;
using System.Collections.Generic;
using FortuneWheel.Slots;
using UnityEngine;

namespace FortuneWheel.Inventory
{
    [CreateAssetMenu(fileName = "CollectedRewardInventory", menuName = "ScriptableObjects/FortuneWheel/Reward Inventory Data")]
    public class WheelRewardInventorySettingsSO : ScriptableObject
    {
        public List<Slot> inventorySlots = new List<Slot>();
        public bool AddRewardToInventory(RewardDataSO _reward)
        {
            foreach (Slot slot in inventorySlots)
            {
                if (slot._reward == _reward)
                {
                    slot._rewardAmount += _reward.amount;
                    return true;

                }
                else if (slot._rewardAmount == 0)
                {
                    slot.AddRewardToSlot(_reward);

                    return true;
                }
            }
            return false;
        }
    }
    [System.Serializable]
    public class Slot
    {
        public RewardDataSO _reward;
        public int _rewardAmount;

        public void AddRewardToSlot(RewardDataSO _item)
        {
            _reward = _item;
            _rewardAmount = _item.amount;
        }
    }
}
