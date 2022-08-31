using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace FortuneWheel.EventSystemInput
{
	public class SpinButtonUI : AbstractBaseInput
	{
		public bool value;

		public override void OnPointerDown(PointerEventData eventData)
		{
			value = true;
		}

		public override void OnPointerUp(PointerEventData eventData)
		{
			value = false;
		}
	}
}
