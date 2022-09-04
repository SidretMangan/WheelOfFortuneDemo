using System.Threading;
using UnityEngine;

namespace GSL
{
    public class BaseSingleton<T> : MonoBehaviour where T : MonoBehaviour
    {
        private static T _instance;
        private static bool _isDestroyed;

        public static T instance
        {
            get
            {
                if (_isDestroyed)
                {
                    Debug.LogWarning("[Singleton] Instance '" + typeof(T) + "' already destroyed. Returning null.");
                    //return null;
                }
                if (_instance == null)
                {
                    _instance = (T)FindObjectOfType(typeof(T));
                    if (FindObjectsOfType(typeof(T)).Length <= 0)
                    {
                        Debug.Log(typeof(T) + " singleton object is not instantiated yet.");
                    }

                    if (FindObjectsOfType(typeof(T)).Length > 1)
                    {
                        Debug.LogError("[Singleton] Something went really wrong - there should never be more then 1 singletion!" +
                                " Reopening the scene might fix it. Thread: " + Thread.CurrentThread.Name);
                    }
                }
                return _instance;
            }
        }

        private void OnDestroy()
        {
            _isDestroyed = true;
        }
    }
}