using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boss3Script : MonoBehaviour {
	float hp = 80;
	float attackTimer;
	float moveTimer;
	public GameObject attack;
	public GameObject bossSound;
	GameManagerScript gameManagerScript;
	public GameObject effect;
	float x = 12.982f;
	float y = 6.165f;
	float z = -39.833f;
	float speed = 3;


	// Use this for initialization
	void Start () {
		gameManagerScript = GameObject.Find ("GameManager").GetComponent<GameManagerScript> ();
		transform.position = new Vector3 (-3.7f, 0, 5.26f);
		}
	
	// Update is called once per frame
	void Update () {
		attackTimer += Time.deltaTime;
		moveTimer += Time.deltaTime;
		Attack ();
		x += 75 * Time.deltaTime;
		y += 30 * Time.deltaTime;
		z -= 25 * Time.deltaTime;
		transform.rotation = Quaternion.Euler (x, y, z);
	}

	void Attack(){
		if (attackTimer > 0.5f) {
			Instantiate (attack, new Vector3 (this.transform.position.x + 0.5f, transform.position.y, transform.position.z), Quaternion.identity);
			Instantiate (attack, new Vector3 (this.transform.position.x - 0.5f, transform.position.y, transform.position.z), Quaternion.identity);
		attackTimer = 0;
		}
		if (moveTimer < 2.5f) {
			transform.position += new Vector3 (speed, 0, 0) * Time.deltaTime;
		} else if (moveTimer < 5) {
			transform.position -= new Vector3 (speed, 0, 0) * Time.deltaTime;

		} else {
			moveTimer = 0;
		}
	}
		

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "1") {
			hp -= 1;
		} else if (col.gameObject.tag == "2") {
			hp -= 2;
		} else if (col.gameObject.tag == "Bomb") {
			hp -= 40;
		}

		if (hp <= 0) {
			Destroy (this.gameObject);
			GameObject soundClone = Instantiate (bossSound) as GameObject;
			Destroy (soundClone, 1);
			gameManagerScript.score += 200;
			Instantiate (effect, transform.position, Quaternion.identity);
		}
	}


}
