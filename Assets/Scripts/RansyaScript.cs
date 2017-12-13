using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RansyaScript : MonoBehaviour {
	public GameObject attack;
	float speed = 2;
	float timer;
	float timer2 = -3;

	float hp = 10;
	public GameObject[] item;
	bool itemGet;
	GameManagerScript gameManagerScript;
	public GameObject effect;
	public GameObject effecti;

	// Use this for initialization
	void Start () {
		if(Random.Range(0,35) == 1){
			this.gameObject.GetComponent<MeshRenderer> ().material.color = new Color (0, 0.3f, 0.8f,0.5f);
			itemGet = true;
				}
		gameManagerScript = GameObject.Find ("GameManager").GetComponent<GameManagerScript> ();
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		timer2 += Time.deltaTime;

		transform.position -= this.transform.forward * speed * Time.deltaTime;
		if (timer > 2) {
			speed = 0;
			timer2 = 0;
			timer = -1000;
		}
		if (timer2 > 0.5) {
			Instantiate (attack, this.transform.position, this.transform.rotation);
			timer2 = 0;
		}
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
			Destroy (this.gameObject);
			gameManagerScript.score += 100;
			if (itemGet) {
				Instantiate (item [Random.Range (0, item.Length)], transform.position, Quaternion.identity);
				Instantiate (effecti, transform.position, Quaternion.identity);
			} else {
				Instantiate (effect, transform.position, Quaternion.identity);
				}
		}
	}


}
