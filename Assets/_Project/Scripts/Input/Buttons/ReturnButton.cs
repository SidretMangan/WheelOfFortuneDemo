namespace FortuneWheel.EventSystemInput
{
    public class ReturnButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.ReturnButton();
        }
    }
}
