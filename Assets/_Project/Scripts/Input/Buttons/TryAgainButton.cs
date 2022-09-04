namespace FortuneWheel.EventSystemInput
{
    public class TryAgainButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.TryAgainButton();
        }
    }
}
