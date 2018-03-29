using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
    public static GM instance;
    public GameObject[] clumb;//柱子数组
    public Transform spawnTransform;
    private int keyCount;
    public GameObject startText, reStartText;
    public Text scoreText,highScoreText;
    public GameObject player1, player2;
    public bool isgameOver;
    private int score,highScore;
    /// <summary>
    ///是时候展示真正的实力啦
    /// </summary>
    Dictionary<string, Stack<GameObject>> pools;

    private void Awake()
    {
        instance = this;
        pools = new Dictionary<string, Stack<GameObject>>();
        isgameOver = true;

    }

    private void Start()
    {
        highScore = PlayerPrefs.GetInt("high", 0);
        ShowHighScore();
        score = 0;
        ShowScore();
       // PlayerInit();
        reStartText.SetActive(false);
        startText.SetActive(true);
        keyCount = clumb.Length;
        ClumbInit();
    }

    

    private void PlayerInit()//玩家初始化
    {
        player1.SetActive(true);
        player2.SetActive(true);
        player1.transform.position = transform.position;
        player1.transform.rotation = transform.rotation;
        player2.transform.position = transform.position;
        player2.transform.rotation = transform.rotation;
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void StartGame()
    {
        //开始游戏
        highScoreText.transform.parent.gameObject.SetActive(false);
        isgameOver = false;
        startText.SetActive(false);
        StartCoroutine(ClumbSpawns());
    }

    public void AddScore()
    {
        score++;
    }

    public  void ShowScore()
    {
        int temp = score / 60;
        scoreText.text = temp + "";
        if (temp>highScore)
        {
            highScore = temp;
            PlayerPrefs.SetInt("high", highScore);
        }
    }

    private void ShowHighScore()
    {
        highScoreText.text = "最高分：" + highScore;
    }

    #region 生成障碍
 public    IEnumerator ClumbSpawns()
    {
        yield return new WaitForSeconds(3f);
        int count = 0;
        float  second = 3f;
        while (true) { 

            if (count >10)
            {
                second -= 0.5f;
                count = 0;
                if (second<=1f)
                {
                    second = 1f;
                }
            }
            int temp = Random.Range(0, keyCount +1) % keyCount;
            string a = clumb[temp].name + "(Clone)";
            print("a的名字是" + a);
            print(a.ToString());
            Creat(a, clumb[temp], spawnTransform.position, Quaternion.identity);
            yield return new WaitForSeconds(second);
            Creat(clumb[5].name + "(Clone)", clumb[5], spawnTransform.position, Quaternion.identity);
            yield return new WaitForSeconds(1f);
            count++;
            print(count);
        }


    }
    #endregion
    #region 对象池

    /// <summary>
    ///   存进去
    /// </summary>
    /// <param name="str"></param>
    /// <param name="go"></param>
    public void Delete(string str, GameObject go)
    {
        go.SetActive(false);
        pools[str].Push(go);
    }
    /// <summary>
    /// 取出来
    /// </summary>
    /// <param name="str"></param>
    /// <param name="prefab"></param>
    /// <param name="pos"></param>
    /// <param name="qua"></param>
    /// <returns></returns>
    public GameObject Creat(string str, GameObject prefab, Vector3 pos, Quaternion qua)
    {
        GameObject go = null;
        if (pools.ContainsKey(str))
        {
            if (pools[str].Count > 0)
            {
                go = pools[str].Pop();
                go.SetActive(true);
                go.transform.position = pos;
                go.transform.rotation = qua;
            }
            else
            {
                go = Instantiate(prefab, pos, qua);
            }
        }
        else
        {
            print("没有发现" + str);
            pools.Add(str, new Stack<GameObject>());
            go = Instantiate(prefab, pos, qua);
        }

        return go;
    }
    #endregion


    private void ClumbInit()
    {
        for (int i = 0; i < clumb.Length;i++)
        {
          GameObject temp=  Creat(clumb[i].name + "(Clone)", clumb[i], transform.position, Quaternion.identity);
            Delete(clumb[i].name + "(Clone)", temp);
        }
    }
}
