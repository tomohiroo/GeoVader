using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletScript : MonoBehaviour {
	float speed = 30;
	public GameObject bulletSound;
	public GameObject effect;
	
	// Update is called once per frame
	void Update () {
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
