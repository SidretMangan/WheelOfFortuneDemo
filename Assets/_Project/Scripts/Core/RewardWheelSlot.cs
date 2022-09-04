using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace FortuneWheel.Slots
{
    public class RewardWheelSlot : MonoBehaviour
    {
        public RewardDataSO reward;
        public Image rewardImage;
        public int amount;
        public TextMeshProUGUI amountText;

        public void SetItem()
        {
            amount = reward.amount;
            if (amount > 0)
            {
                amountText.SetText("X" + reward.amount.ToString());
            }
            if (reward.rewardType == RewardType.Bomb)
            {
                amountText.SetText("");
            }
            rewardImage.sprite = reward.sprite;
        }
    }
}
