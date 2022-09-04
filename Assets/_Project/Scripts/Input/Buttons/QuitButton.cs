namespace FortuneWheel.EventSystemInput
{
    public class QuitButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.QuitButton();
        }
    }
}
