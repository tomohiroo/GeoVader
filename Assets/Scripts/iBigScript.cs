﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class iBigScript : MonoBehaviour {
	float speed = 2;
	float hp = 8;
	public GameObject[] item;
	GameManagerScript gameManagerScript;
	public GameObject effect;

	// Use this for initialization
	void Start () {
		gameManagerScript = GameObject.Find ("GameManager").GetComponent<GameManagerScript> ();
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += transform.forward * speed * Time.deltaTime;
	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "1") {
			hp -= 1;
		} else if (col.gameObject.tag == "2") {
			hp -= 2;
		} else if (col.gameObject.tag == "Bomb") {
			hp = 0;
		}
		if (hp <= 0) {
			Instantiate (item [Random.Range(0,item.Length)], transform.position, Quaternion.identity);
			Destroy(this.gameObject);
			gameManagerScript.score += 30;
			Instantiate (effect, transform.position, Quaternion.identity);
			}
	}


}