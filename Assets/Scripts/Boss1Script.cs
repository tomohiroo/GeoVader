using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boss1Script : MonoBehaviour {
	float hp = 80;
	float attackTimer;
	public GameObject wAttack;
	public GameObject bossSound;
	GameManagerScript gameManagerScript;
	public GameObject effect;
	float x = 12.982f;
	float y = 6.165f;
	float z = -39.833f;


	// Use this for initialization
	void Start () {
		gameManagerScript = GameObject.Find ("GameManager").GetComponent<GameManagerScript> ();
		}
	
	// Update is called once per frame
	void Update () {
		attackTimer += Time.deltaTime;
		Attack ();
		x += 75 * Time.deltaTime;
		y += 30 * Time.deltaTime;
		z -= 25 * Time.deltaTime;
		transform.rotation = Quaternion.Euler (x, y, z);
	}

	void Attack(){
		if (attackTimer > 1.5f) {
			if (Random.Range (0, 2) == 0) {
				for (int i = 0; i < 36; i++) {
					Instantiate (wAttack, new Vector3 (0, 0, this.transform.position.z), Quaternion.Euler (0, 90 + i * 10, 45));
				}
			} else {
				for (int i = 0; i < 36; i++) {
					Instantiate (wAttack, new Vector3 (0, 0, this.transform.position.z), Quaternion.Euler (0, 85 + i * 10, 45));
				}
			}
		attackTimer = 0;
		
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
