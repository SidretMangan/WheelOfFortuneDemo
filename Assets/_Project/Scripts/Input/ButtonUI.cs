using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using FortuneWheel.Wheel;
namespace FortuneWheel.EventSystemInput
{
    [RequireComponent(typeof(Image))]
    public class ButtonUI : AbstractBaseInput
    {
        private Image imageComponent;
        private Color normalColor = Color.white;
        private Color disabledColor = new Color(0.7843137f, 0.7843137f, 0.7843137f, 0.5f);
        [HideInInspector] protected FortuneWheelManager fortuneWheelManager;
        private void Awake()
        {
            fortuneWheelManager = FindObjectOfType<FortuneWheelManager>();
            imageComponent = GetComponent<Image>();
        }
        public override void OnPointerDown(PointerEventData eventData)
        {
            ClickDown();
        }
        public virtual void ClickDown()
        {
            imageComponent.raycastTarget = false;
            imageComponent.color = disabledColor;
        }
        public virtual void GetInteractable()
        {
            imageComponent.color = normalColor;
            imageComponent.raycastTarget = true;
        }
    }
}
