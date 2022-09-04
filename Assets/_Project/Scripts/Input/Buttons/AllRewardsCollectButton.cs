namespace FortuneWheel.EventSystemInput
{
    public class AllRewardsCollectButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.AllRewardsCollectButton();
        }
    }
}
