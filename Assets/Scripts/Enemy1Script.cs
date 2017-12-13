using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy1Script : MonoBehaviour {
	
    GameObject target;//追いかける対象-オブジェクトをインスペクタから登録できるように
	float speed = 5.5f;//移動スピード
	bool itemGet;
	public GameObject[] item;
	GameManagerScript gameManagerScript;
	public GameObject effect;
	public GameObject effecti;

	void Start () {
		target = GameObject.Find("Player");	//target = GameObject.Find("対象").transform; インスペクタから登録するのでいらない
		if(Random.Range(0,35) == 1){
			this.gameObject.GetComponent<MeshRenderer> ().material.color = new Color (0, 0.3f, 0.8f,0.5f);
			itemGet = true;
		}
		gameManagerScript = GameObject.Find ("GameManager").GetComponent<GameManagerScript> ();
		}

	void Update () {
		//targetの方に少しずつ向きが変わる
		transform.rotation = Quaternion.Slerp (transform.rotation, Quaternion.LookRotation (target.transform.position - transform.position), 0.1f);

		//targetに向かって進む
		transform.position += transform.forward * speed * Time.deltaTime;
	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "1" || col.gameObject.tag == "2" || col.gameObject.tag == "Bomb") {
			Destroy (this.gameObject);
			gameManagerScript.score += 20;
			if (itemGet) {
				Instantiate (item [Random.Range (0, item.Length)], transform.position, Quaternion.identity);
				Instantiate (effecti, transform.position, Quaternion.identity);
			} else {
				Instantiate (effect, transform.position, Quaternion.identity);
			}
		}
	}

}