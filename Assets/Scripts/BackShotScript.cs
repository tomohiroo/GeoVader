using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackShotScript : MonoBehaviour {

	public GameObject backShotSound;
	
	// Update is called once per frame
	void Update () {
		transform.position -= new Vector3 (0, 0, 15) * Time.deltaTime;
		transform.Rotate(new Vector3(0, 0, 400) * Time.deltaTime);
	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "Enemy") {
			GameObject soundClone = Instantiate (backShotSound);
			Destroy (soundClone, 1);
		}
		if (col.gameObject.tag == "wall") {
			Destroy (this.gameObject);
		}
	}
}
