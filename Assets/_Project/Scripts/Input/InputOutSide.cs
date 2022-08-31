using UnityEngine;
using UnityEngine.EventSystems;


namespace FortuneWheel.EventSystemInput
{
    public class InputOutSide : AbstractBaseInput
    {
        public override void OnPointerDown(PointerEventData eventData)
        {
            Debug.Log("Finger Down" + eventData.position);
        }

        public override void OnPointerUp(PointerEventData eventData)
        {
            Debug.Log("Finger Up" + eventData.position);
        }
    }
}
