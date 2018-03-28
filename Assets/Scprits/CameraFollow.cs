using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour {

    public Transform player;

    private void LateUpdate()
    {
        Vector3 temp= new Vector3(transform.position.x, player.position.y, transform.position.z);

        transform.position = Vector3.Lerp(transform.position, temp,10* Time.deltaTime);

    }

    
}
