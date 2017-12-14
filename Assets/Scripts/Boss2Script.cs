using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boss2Script : MonoBehaviour {
	public GameObject wAttack;
	float hp = 75;
	public GameObject sound;
	public GameObject effect;
	float rot;
	void Start(){
		StartCoroutine ("Attack");
	}

	IEnumerator Attack(){
			for (int i = 0; i < 100000; i += 7) {
			Instantiate (wAttack, transform.position, Quaternion.Euler (0, i, 45));
			Instantiate (wAttack, transform.position, Quaternion.Euler (0, i + 90, 45));
			Instantiate (wAttack, transform.position, Quaternion.Euler (0, i + 180, 45));
			Instantiate (wAttack, transform.position, Quaternion.Euler (0, i + 270, 45));
			yield return new WaitForSeconds (0.3f);
			}
	}

	void Update(){
		transform.rotation = Quaternion.Euler (0, rot, 0);
		rot += 21 * Time.deltaTime;
	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "1") {
			hp -= 1;
		} else if (col.gameObject.tag == "2") {
			hp -= 2;
		}else if (col.gameObject.tag == "Bomb") {
			hp -= 40;
		}

		if (hp <= 0) {
			Destroy (this.gameObject);
			GameObject soundClone = Instantiate (sound) as GameObject;
			Destroy (soundClone, 1);
			GameObject.Find ("GameManager").GetComponent<GameManagerScript>().score += 250;
			Instantiate (effect, transform.position, Quaternion.identity);
		}
	}

}
