using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour {

    public Transform player;
    private Vector3 tempPos;

  private   void Start()
    {
        tempPos = player.position - transform.position;

    }

    private void LateUpdate()
    {

        Vector3 pos = player.position;
        Vector3 temp = new Vector3(transform.position.x, player.position.y-tempPos.y , transform.position.z);

       // temp = Vector3.Lerp(transform.position, temp, Time.deltaTime * 5f);


            transform.position = temp;

        

    }
    }
