namespace FortuneWheel.EventSystemInput
{
    public class PremiumCurrencyContinueButton : ButtonUI
    {
        public override void ClickDown()
        {
            base.ClickDown();
            fortuneWheelManager.PremiumCurrencyContinueButton();
        }
    }
}
