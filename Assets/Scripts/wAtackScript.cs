﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wAtackScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Destroy (this.gameObject, 10);
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += 2 * transform.forward * Time.deltaTime;
	}
	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "Bomb") {
			Destroy (this.gameObject);
		}
	}
}
