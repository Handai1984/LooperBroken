using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Clumb : MonoBehaviour {

    private void OnCollisionExit2D(Collision2D collision)
    {
        this.gameObject.SetActive(false);
    }
}
