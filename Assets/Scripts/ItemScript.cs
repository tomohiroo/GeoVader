using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemScript : MonoBehaviour {

	float x = 12.982f;
	float y = 6.165f;
	float z = -39.833f;


	void Update () {
		transform.position -= new Vector3 (0, 0, 2) * Time.deltaTime;

		x += 260 * Time.deltaTime;
		y += 122 * Time.deltaTime;
		z -= 80 * Time.deltaTime;
		transform.rotation = Quaternion.Euler (x, y, z);
	}
}
