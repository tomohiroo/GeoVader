using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour {
	float speed = 30;
	float timer;
	public GameObject bulletSound;
	public GameObject effect;
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		transform.position += this.transform.forward * speed * Time.deltaTime;
		if (timer > 5) {
			Destroy (this.gameObject);
		}
		if (transform.position.z > 11) {
			Destroy (this.gameObject);
		}
	}


	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "Enemy") {
			Destroy (this.gameObject);
			GameObject soundClone = Instantiate (bulletSound)as GameObject;
			Destroy (soundClone, 1);
			Instantiate (effect, transform.position, Quaternion.identity);
		}
		if (col.gameObject.tag == "wall") {
			Destroy (this.gameObject);
		}
	}
}
