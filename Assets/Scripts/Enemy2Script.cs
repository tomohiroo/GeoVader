using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy2Script : MonoBehaviour {

	public GameObject attack;
	float speed = 2;
	float timer;
	float hp = 1;
	public GameObject[] item;
	bool itemGet;
	GameManagerScript gameManagerScript;
	public GameObject effect;
	public GameObject effecti;

	// Use this for initialization
	void Start () {
		gameManagerScript = GameObject.Find ("GameManager").GetComponent<GameManagerScript> ();

		if(Random.Range(0,35) == 1){
			this.gameObject.GetComponent<MeshRenderer> ().material.color = new Color (0, 0.3f, 0.8f,0.5f);
			itemGet = true;	
		}
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		transform.position += this.transform.forward * speed * Time.deltaTime;
		if (timer > 2.5f) {
			Instantiate (attack, this.transform.position, Quaternion.Euler(0,0,45));
			timer = 0;
		}


	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "1") {
			hp -= 1;
		} else if (col.gameObject.tag == "2" || col.gameObject.tag == "Bomb") {
			hp -= 2;
		}
		if (hp <= 0) {
			Destroy (this.gameObject);
			gameManagerScript.score += 25;
			if (itemGet) {
				Instantiate (item [Random.Range (0, item.Length)], transform.position, Quaternion.identity);
				Instantiate (effecti, transform.position, Quaternion.identity);
			} else {
				Instantiate (effect, transform.position, Quaternion.identity);
			}
		}

	}

}
