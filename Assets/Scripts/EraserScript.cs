using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EraserScript : MonoBehaviour {

	public GameObject eraserSound;
	public GameObject effect;

	void Start (){
		Destroy (this.gameObject, 2);
	}

	void Update () {
		transform.position += new Vector3 (0, 0, 15) * Time.deltaTime;
		transform.Rotate(new Vector3(0, 900, 0) * Time.deltaTime);
		if (transform.position.z > 11) {
			Destroy (this.gameObject);
		}
	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "Attack") {
			Destroy (col.gameObject);
			Instantiate (effect, transform.position, Quaternion.identity);
			GameObject soundClone = Instantiate (eraserSound);
			Destroy (soundClone, 1);
		}
		if (col.gameObject.tag == "wall") {
			Destroy (this.gameObject);
		}
		if (col.gameObject.tag == "Enemy") {
			GameObject soundClone = Instantiate (eraserSound);
			Destroy (soundClone, 1);
		}
		if (col.gameObject.tag == "wall") {
			Destroy (this.gameObject);
		}
	}
}
