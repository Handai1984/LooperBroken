using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Clumb : MonoBehaviour {

    private void OnCollisionExit2D(Collision2D collision)
    {
       
        if (collision.gameObject.CompareTag("Clumb"))
        {
           GM.instance.Delete(collision.transform.parent.gameObject.name,collision.transform.parent.gameObject);
//            print("我的名字是"+ collision.transform.parent.gameObject.ToString());
        }
        if (collision.gameObject.CompareTag("luzhang"))
        {
            GM.instance.Delete(collision.gameObject.name, collision.gameObject);
        }
        
    }
}
