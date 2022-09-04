using UnityEngine;

namespace FortuneWheel.Slots
{
    [CreateAssetMenu(fileName = "Reward", menuName = "ScriptableObjects/FortuneWheel/Reward Data")]
    public class RewardDataSO : ScriptableObject
    {
        public RewardType rewardType;
        public int amount;
        public Sprite sprite;
    }
    public enum RewardType
    {
        Bomb,
        Weapon,
        Melee,
        Chest,
        ArmorPoints,
        KnifePoints,
        PistolPoints,
        RiflePoints,
        ShotgunPoints,
        SMGPoints,
        SniperPoints,
        WeaponSkin,
        BodySkin,
        Cash,
        Gold,
        HealthItem
    }
}
