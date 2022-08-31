using UnityEngine.EventSystems;

namespace FortuneWheel.EventSystemInput
{
    public interface IDownUpInput
    {
        void OnPointerDown(PointerEventData eventData);
        void OnPointerUp(PointerEventData eventData);
    }
}
