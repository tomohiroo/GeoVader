﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackGroundScriopt : MonoBehaviour {


	// Update is called once per frame
	void Update () {
		transform.position -= new Vector3 (0, 0, 3) * Time.deltaTime;
	}
}
