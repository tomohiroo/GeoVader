using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuickScript : MonoBehaviour {
	float speed = 10;
	bool itemGet;
	public GameObject[] item;
	float hp = 11;
	public GameObject effect;
	public GameObject effecti;

	// Use this for initialization
	void Start () {
		if(Random.Range(0,35) == 3){
			this.gameObject.GetComponent<MeshRenderer> ().material.color = new Color (0, 0.3f, 0.8f,0.5f);
			itemGet = true;
		}
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
			GameObject.Find ("GameManager").GetComponent<GameManagerScript> ().score += 100;
			Destroy(this.gameObject);
			if (itemGet) {
				Instantiate (item [Random.Range (0, item.Length)], transform.position, Quaternion.identity);
				Instantiate (effecti, transform.position, Quaternion.identity);
			} else {
				Instantiate (effect, transform.position, Quaternion.identity);
				}
		}
	}

}
