using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallScript : MonoBehaviour {

	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "Enemy" || col.gameObject.tag == "Attack") {
			Destroy (col.gameObject);
		}
	}
}
