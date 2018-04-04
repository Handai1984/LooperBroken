using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Clumb : MonoBehaviour {

    private void OnCollisionExit2D(Collision2D collision)
    {
       
        if (collision.gameObject.CompareTag("luzhang"))
        {
            GM.instance.Delete(collision.gameObject.name, collision.gameObject);
        }
        
    }
}
