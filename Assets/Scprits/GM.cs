using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GM : MonoBehaviour {
    public static GM instance;
    public GameObject target;//collider物体对象用来激活和关闭碰撞器
    public GameObject[] culmb;//柱子数组
    public List<GameObject> clumbList;
    public Transform spawnTransform;

    private void Awake()
    {
        instance = this;
        clumbList = new List<GameObject>();
    }

    private void Start()
    {
        for (int i = 0; i < culmb.Length; i++)
        {
         GameObject temp=   Instantiate(culmb[i])as GameObject;
            clumbList.Add(temp);
            clumbList[i].SetActive(false);
        }

        StartCoroutine(ClumbSpawns());
    }


   

    IEnumerator ClumbSpawns()
    {
        yield return new WaitForSeconds(3f);
        if (clumbList.Count == 0)
        {
            yield break;
        }
        for (int i = 0; i < clumbList.Count; i++)
        {

            clumbList[i].SetActive(true);
            clumbList[i].transform.position = new Vector3(spawnTransform.position.x, spawnTransform.position.y, clumbList[i].transform.position.z);
            yield return new WaitForSeconds(5f);
            clumbList.Remove(clumbList[i]);
        }
        
    }


}
