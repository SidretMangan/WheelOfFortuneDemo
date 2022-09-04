using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

namespace FortuneWheel.EventSystemInput
{
    public abstract class AbstractBaseInput : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        public virtual void OnPointerDown(PointerEventData eventData)
        {
            //TODO find all openned panels which can be closed. And close
        }

        public virtual void OnPointerUp(PointerEventData eventData)
        {

        }
    }
}
