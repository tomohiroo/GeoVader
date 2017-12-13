using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BigScript : MonoBehaviour {
	float speed = 2;
	float hp = 10;
	bool itemGet;
	public GameObject[] item;
	GameManagerScript gameManagerScript;
	public GameObject effect;
	public GameObject effecti;

	// Use this for initialization
	void Start () {
		if(Random.Range(0,25) == 1){
			this.gameObject.GetComponent<MeshRenderer> ().material.color = new Color (0, 0.3f, 0.8f,0.5f);
			itemGet = true;
			}
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
			Destroy(this.gameObject);
			gameManagerScript.score += 50;
			if (itemGet) {
				Instantiate (item [Random.Range (0, item.Length)], transform.position, Quaternion.identity);
				Instantiate (effecti, transform.position, Quaternion.identity);
			} else {
				Instantiate (effect, transform.position, Quaternion.identity);
				}
		}
	}


}
