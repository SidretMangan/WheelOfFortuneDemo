namespace FortuneWheel.EventSystemInput
{
    public class RewardsPanelCollectButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.RewardsPanelCollectButton();
        }
    }
}
