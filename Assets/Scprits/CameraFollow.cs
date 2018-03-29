using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour {

    public Transform player;
    public float speed = 1f;
    private void Update()
    {
        Vector3 temp = new Vector3(transform.position.x, player.position.y + 3, transform.position.z);

        transform.position = Vector3.Lerp(transform.position, temp, Time.deltaTime);


    }
    }
