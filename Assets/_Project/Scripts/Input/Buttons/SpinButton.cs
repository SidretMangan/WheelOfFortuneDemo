namespace FortuneWheel.EventSystemInput
{
    public class SpinButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.SpinButton();
        }
    }
}