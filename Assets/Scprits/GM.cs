using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GM : MonoBehaviour {
    public static GM instance;
    public GameObject target;//collider物体对象用来激活和关闭碰撞器

    private void Awake()
    {
        instance = this;
    }




}
