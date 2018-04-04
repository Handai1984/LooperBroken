using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{

    public float rotateSpeed = 100f;

    public float speed = 1;
    private Vector3 moveTowardPosition;
    public   float moveSpeed =1f;
    bool isTouch = false;
    private Quaternion rotationTemp;
   // float angle;
    Quaternion rotation;
    public float angle;//设置旋转角度



    private void Start()
    {
        
    }

    private void Update()
    {

        //1、获得当前位置
        //Vector3 curenPosition = this.transform.position;
        ////Vector2 direction = Camera.main.ScreenToWorldPoint(Input.mousePosition) - transform.position;
        ////float angle = Mathf.Atan2(direction.x, direction.y) * Mathf.Rad2Deg;
        ////Quaternion rotation = Quaternion.AngleAxis(-angle, Vector3.forward);
        ////transform.rotation = Quaternion.Slerp(transform.rotation, rotation, rotateSpeed * Time.deltaTime);
        ////2、获得方向
        //if (Input.GetButton("Fire1"))
        //{
        //    moveTowardPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        //    moveTowardPosition.z = 0;
        //}
        //if (Vector3.Distance(curenPosition, moveTowardPosition) < 0.01f)
        //{
        //    transform.position = moveTowardPosition;
        //}
        //else
        //{
        //    //3、插值移动
        //    //距离就等于 间隔时间乘以速度即可
        //    float maxDistanceDelta = Time.deltaTime * speed;
        //    transform.position = Vector3.MoveTowards(curenPosition, moveTowardPosition, maxDistanceDelta);
        //     angle = Mathf.Atan2(moveTowardPosition.x, moveTowardPosition.y) * Mathf.Rad2Deg;
        //     rotation = Quaternion.AngleAxis(-angle, Vector3.forward);
        //    transform.rotation = Quaternion.Slerp(transform.rotation, rotation, rotateSpeed * Time.deltaTime);
        //    //Quaternion a = Quaternion.LookRotation(moveTowardPosition - curenPosition);
        //    //transform.rotation = a;
        //}

        rotationTemp = Quaternion.Euler(0, 0, angle);
        transform.Translate(Vector3.up * moveSpeed * Time.deltaTime,Space.Self);//设置移动速度
        transform.rotation = Quaternion.Lerp(transform.rotation, rotationTemp, 1);
        if (Input.GetMouseButton(0))
        {

            if (!isTouch)
            {

                //quaternion = Quaternion.Slerp(quaternion, rotationTemp, 50*Time.deltaTime);
                // moveSpeed = 10;
                // transform.rotation = rotationTemp;
                transform.rotation = new Quaternion();
                angle = -angle;
                moveSpeed = 10f;
                isTouch = true;

            }
        }
        else
        {
            if (isTouch)
            {

               // transform.Translate(Vector3.forward * moveSpeed * Time.deltaTime);
                // transform.rotation = Quaternion.Inverse(transform.rotation);
                 
                isTouch = false;
            }

        }






    }
}
