using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserScript : MonoBehaviour {
	float speed = 60;
	float timer;
	public GameObject laserSound;
	// Use this for initialization
	void Start () {
	}
	
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
			GameObject soundClone = Instantiate (laserSound);
			Destroy (soundClone, 1);
		}
		if (col.gameObject.tag == "wall") {
			Destroy (this.gameObject);
		}
	}
}
