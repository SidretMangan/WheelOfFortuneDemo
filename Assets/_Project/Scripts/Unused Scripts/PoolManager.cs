using System.Collections.Generic;
using UnityEngine;

namespace GSL
{
    public class PoolManager : MonoBehaviour
    {
        [System.Serializable]
        public struct Pool
        {
            public Queue<GameObject> pooledObjects;
            public GameObject objectPrefab;
            public int poolSize;
        }
        [SerializeField] private Pool[] pools = null;
        [SerializeField] private Transform objParent;
        private void Awake()
        {
            for (int j = 0; j < pools.Length; j++)
            {
                pools[j].pooledObjects = new Queue<GameObject>();

                for (int i = 0; i < pools[j].poolSize; i++)
                {
                    GameObject obj = Instantiate(pools[j].objectPrefab, objParent);
                    obj.SetActive(false);
                    pools[j].pooledObjects.Enqueue(obj);
                }
            }
        }
        public GameObject GetPooledObject(int objectType, float xPos, float yPos, float zPos)
        {
            if (objectType >= pools.Length)
            {
                return null;
            }
            GameObject obj = pools[objectType].pooledObjects.Dequeue();
            obj.transform.position = new Vector3(xPos, yPos, zPos);
            obj.SetActive(true);
            pools[objectType].pooledObjects.Enqueue(obj);
            obj.GetComponent<ParticleSystem>().Play();
            return obj;
        }
    }
}
