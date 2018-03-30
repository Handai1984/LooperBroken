using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GM : MonoBehaviour
{
	public static GM instance;
	public GameObject[] clumb;
//柱子数组
	public Transform spawnTransform;
	private int keyCount;
	public GameObject startText, reStartText;
	public Text scoreText, highScoreText;
	public GameObject player1, player2;
	public bool isgameOver;
	private int score, highScore;
	//谷歌广告
	private GoogleAD google1;
	private GoogleAD google2;
	private List<GoogleAD> gad;
	private int countInter;
	//计数器
	private int countBanner;
	/// <summary>
	///是时候展示真正的实力啦
	/// </summary>
	Dictionary<string, Stack<GameObject>> pools;

	private void Awake ()
	{
		instance = this;
		pools = new Dictionary<string, Stack<GameObject>> ();
		isgameOver = true;

	}

	private void Start ()
	{
		highScore = PlayerPrefs.GetInt ("high", 0);
		ShowHighScore ();
		score = 0;
		ShowScore ();
		// PlayerInit();
		reStartText.SetActive (false);
		startText.SetActive (true);
		keyCount = clumb.Length;
		ClumbInit ();
		gad = new List<GoogleAD> ();
		
		//查找广告脚本
		google1 = GameObject.Find ("GoogleADOne").GetComponent<GoogleAD> ();
		google2 = GameObject.Find ("GoogleADTwo").GetComponent<GoogleAD> ();
		
		gad.Add (google1);
		gad.Add (google2);
		print ("我装了几个进去？" + gad.Count);
		//初始化广告脚本
		GADInitInterstitial ();
		GADInitBanner ();
		GADBannerShow ();
	}

    

	private void PlayerInit ()//玩家初始化
	{
		player1.SetActive (true);
		player2.SetActive (true);
		player1.transform.position = transform.position;
		player1.transform.rotation = transform.rotation;
		player2.transform.position = transform.position;
		player2.transform.rotation = transform.rotation;
	}
	private void GDACount()
	{
		countInter = PlayerPrefs.GetInt ("inter", 0);
		countBanner = PlayerPrefs.GetInt ("banner", 0);
	}

	public void RestartGame ()
	{
		SceneManager.LoadScene (SceneManager.GetActiveScene ().name);
	}

	public void StartGame ()
	{
		//开始游戏
		highScoreText.transform.parent.gameObject.SetActive (false);
		isgameOver = false;
		startText.SetActive (false);
		StartCoroutine (ClumbSpawns ());
	}

	public void AddScore ()
	{
		score++;
	}

	public  void ShowScore ()
	{
		int temp = score / 60;
		scoreText.text = temp + "";
		if (temp > highScore) {
			highScore = temp;
			PlayerPrefs.SetInt ("high", highScore);
		}
	}

	private void ShowHighScore ()
	{
		highScoreText.text = "最高分：" + highScore;
	}

	#region 生成障碍

	public    IEnumerator ClumbSpawns ()
	{
		yield return new WaitForSeconds (3f);
		int count = 0;
		float second = 3f;
		while (true) { 

			if (count > 10) {
				second -= 0.5f;
				count = 0;
				if (second <= 1f) {
					second = 1f;
				}
			}
			int temp = Random.Range (0, keyCount + 1) % keyCount;
			string a = clumb [temp].name + "(Clone)";
//			print ("a的名字是" + a);
			print (a.ToString ());
			Creat (a, clumb [temp], spawnTransform.position, Quaternion.identity);
			yield return new WaitForSeconds (second);
			Creat (clumb [5].name + "(Clone)", clumb [5], spawnTransform.position, Quaternion.identity);
			yield return new WaitForSeconds (1f);
			count++;
//			print (count);
		}


	}

	#endregion

	#region 对象池

	/// <summary>
	///   存进去
	/// </summary>
	/// <param name="str"></param>
	/// <param name="go"></param>
	public void Delete (string str, GameObject go)
	{
		go.SetActive (false);
		pools [str].Push (go);
	}

	/// <summary>
	/// 取出来
	/// </summary>
	/// <param name="str"></param>
	/// <param name="prefab"></param>
	/// <param name="pos"></param>
	/// <param name="qua"></param>
	/// <returns></returns>
	public GameObject Creat (string str, GameObject prefab, Vector3 pos, Quaternion qua)
	{
		GameObject go = null;
		if (pools.ContainsKey (str)) {
			if (pools [str].Count > 0) {
				go = pools [str].Pop ();
				go.SetActive (true);
				go.transform.position = pos;
				go.transform.rotation = qua;
			} else {
				go = Instantiate (prefab, pos, qua);
			}
		} else {
//			print ("没有发现" + str);
			pools.Add (str, new Stack<GameObject> ());
			go = Instantiate (prefab, pos, qua);
		}

		return go;
	}

	#endregion


	private void ClumbInit ()
	{
		for (int i = 0; i < clumb.Length; i++) {
			GameObject temp = Creat (clumb [i].name + "(Clone)", clumb [i], transform.position, Quaternion.identity);
			Delete (clumb [i].name + "(Clone)", temp);
		}
	}

	//初始化插屏和横幅广告
	void GADInitInterstitial ()
	{
		for (int i = 0; i < gad.Count; i++) {
			gad [i].RequestInterstitial ();
	
		}
	}
	//初始化横幅广告
	void GADInitBanner ()
	{
		for (int i = 0; i < gad.Count; i++) {
	
			gad [i].RequestBanner ();
			gad [i].BannerHide ();
		}
	}
	
	
	//轮流显示插屏
	public void GADInterstitalShow ()
	{
		if (countInter >= gad.Count) {
			GADInitInterstitial ();
			countInter = 0;
			PlayerPrefs.SetInt ("inter",countInter);
	
	
		} else {
	
			gad [countInter].ShowInterstitial ();
			print ("显示插屏" + countInter);
			countInter++;
			PlayerPrefs.SetInt ("inter",countInter);
		}
	}
	/// <summary>
	/// 轮流播放横幅
	/// </summary>
	public void GADBannerShow ()
	{
		//轮流播放
		StartCoroutine (TurnBannerShow ());
	}

	IEnumerator TurnBannerShow ()
	{
		for (int i = 0; i < gad.Count; i++) {
	
			yield return new WaitForSeconds (1f);
			gad [i].BannerShow ();
			yield return new WaitForSeconds (10f);
			gad [i].BannerHide ();
			if (i == gad.Count - 1) {
				i = -1;
			}
			print ("i=" + i);
	
		}
	}
			

}
