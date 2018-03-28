using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public float moveSpeed = 1;//移动速度

    private bool isTouch;//是否按住屏幕
    private bool isCollider;//是否进入内部collider循环
    private Quaternion rotationTemp;
    private Quaternion quaternion;
    public float angle;//设置旋转角度

    private void Start()
    {
        isTouch = false;
        isCollider = false;
        rotationTemp = Quaternion.Euler(0, 0, angle);
    }

    private void Update()
    {

        transform.Translate(Vector3.up * moveSpeed * Time.deltaTime);//设置移动速度

        if (Input.GetMouseButton(0))
        {
            if (!isTouch)
            {
               
                //quaternion = Quaternion.Slerp(quaternion, rotationTemp, 50*Time.deltaTime);
                transform.rotation = rotationTemp;
               

                isTouch = true;
                isCollider = false;
            }
        }
        else
        {
            if (isTouch)
            {
                //if (isCollider)
                //{
                //    isTouch = false;
                //    isCollider = false;
                //    return;
                //}

                transform.rotation = Quaternion.Inverse(transform.rotation);
                isTouch = false;
            }
          //  GM.instance.target.SetActive(false);
        }





    }




    

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("RightRotateIdle"))
        {
            if (isTouch)
            {
                //isCollider = true;
            transform.rotation = Quaternion.Inverse(transform.rotation);

            }
        }

        if (collision.gameObject.CompareTag("Bounds"))
        {
           // GM.instance.target.SetActive(true);
            if (!isTouch)
            {
            rotationTemp = Quaternion.Inverse(transform.rotation);
            transform.rotation = new Quaternion();

            }
        }
    }
}
