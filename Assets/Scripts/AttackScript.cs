using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackScript : MonoBehaviour {
	GameObject target;
	// Use this for initialization
	void Start () {
		target = GameObject.Find("Player");

		transform.rotation = Quaternion.LookRotation (target.transform.position - transform.position);
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += transform.forward * 3 * Time.deltaTime;
	}
	void OnTriggerEnter(Collider col){
		if (col.gameObject.tag == "Bomb") {
			Destroy (this.gameObject);
		}
	}

}
