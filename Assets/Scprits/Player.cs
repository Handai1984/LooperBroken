using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public float moveSpeed = 1;//移动速度

    private bool isTouch;//是否按住屏幕

    private Quaternion rotationTemp;
    Rigidbody2D rb;
    Vector3 a = new Vector3(1, 1, 1);
    public float angle;//设置旋转角度
    private bool isbounds;

    private void Start()
    {
        isTouch = false;
        isbounds = true;
    }

    private void Update()
    {


        if (GM.instance.isgameOver == false)
        {
            transform.Translate(Vector3.up * moveSpeed * Time.deltaTime, Space.Self);//设置移动速度
            if (!isbounds)
            {
                rotationTemp = Quaternion.Euler(0, 0, angle);
                transform.rotation = Quaternion.Lerp(transform.rotation, rotationTemp, 1);
            }

            if (Input.GetMouseButton(0))
            {
                if (!isTouch&&isbounds)
                {
                    isbounds = false;
                    if (angle > 0 && transform.position.x < 0)
                    {
                        transform.rotation = new Quaternion();
                        angle = -angle;
                        moveSpeed = 20f;
                    }
                    if (angle < 0 && transform.position.x > 0)
                    {
                        transform.rotation = new Quaternion();
                        angle = -angle;
                        moveSpeed = 20f;
                    }
                    //  moveSpeed = 10f;
                    isTouch = true;

                }
            }
            else
            {
                if (isTouch)
                {


                    // transform.rotation = Quaternion.Inverse(transform.rotation);
                    isTouch = false;
                }

            }
            GM.instance.AddScore();
            GM.instance.ShowScore();
        }





    }

    private void OnCollisionExit2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Bounds"))
        {
            // rotationTemp = Quaternion.Inverse(transform.rotation);
            isbounds = true;
            transform.rotation = new Quaternion();
            moveSpeed = 5f;
        }

    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if ( collision.gameObject.CompareTag("luzhang"))
        {
            //StopCoroutine(GM.instance.ClumbSpawns());
            //StopCoroutine(GM.instance.HandrailSpawns());
            //StopAllCoroutines();
            //Todo:gameisover
            GM.instance.isgameOver = true;
            GM.instance.reStartText.SetActive(true);
            gameObject.SetActive(false);
            GM.instance.GADInterstitalShow();//显示插屏
        }

    }
}
