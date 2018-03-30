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

    private void Start()
    {
        isTouch = false;
        rotationTemp = Quaternion.Euler(0, 0, angle);
    }

    private void Update()
    {
        
      
        if (GM.instance.isgameOver == false)
        {

            transform.Translate(Vector3.up * moveSpeed * Time.deltaTime);//设置移动速度
            

            if (Input.GetMouseButton(0))
            {
                if (!isTouch)
                {

                    //quaternion = Quaternion.Slerp(quaternion, rotationTemp, 50*Time.deltaTime);
                    transform.rotation = rotationTemp;


                    isTouch = true;

                }
            }
            else
            {
                if (isTouch)
                {


                    transform.rotation = Quaternion.Inverse(transform.rotation);
                   
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
            rotationTemp = Quaternion.Inverse(transform.rotation);
            transform.rotation = new Quaternion();
        }

    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Clumb"))
        {
            StopCoroutine(GM.instance.ClumbSpawns());
            //Todo:gameisover
            GM.instance.isgameOver = true;
            GM.instance.reStartText.SetActive(true);
            gameObject.SetActive(false);
			GM.instance.GADInterstitalShow ();//显示插屏
        }

    }
}
