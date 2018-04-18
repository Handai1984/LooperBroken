using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontDestroy : MonoBehaviour {

	public GameObject a, b ,c;
	// Use this for initialization
	void Start () {
		DontDestroyOnLoad (a);
		DontDestroyOnLoad (b);
		DontDestroyOnLoad (c);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
