using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BombScript : MonoBehaviour {
	public GameObject bombSound;
	// Use this for initialization
	void Start () {
		Destroy (this.gameObject, 1.5f);
		GameObject soundClone = Instantiate (bombSound);
		Destroy (soundClone, 2);
	}
	
	// Update is called once per frame
	void Update () {
		transform.localScale += new Vector3 (30, 30, 30) * Time.deltaTime;
	}
}
