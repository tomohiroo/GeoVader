using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;


public class PlayerManager : MonoBehaviour {
	Vector3 preMousePos;
	public GameObject player;
	public GameObject bullet;
	public GameObject twinShot;
	public GameObject wideShot;
	public GameObject gameManager;
	public GameObject bomb;
    float speed;
	float timer;
	public GameObject Laser;
	float LaserTimer = -0.2f;
	int laserCount;
	int wideCount;
	float wideTimer = -0.02f;
	int twinCount;
	float twinTimer = -0.01f;
	public GameObject homingShot;
	int homingCount;
	float homingTimer = 0.2f;
	public Text information;
	public GameObject itemSound;
	public GameObject effect;
	public bool finish;
	float finishTimer;
	bool move;
	GameManagerScript gameManagerScript;
	bool isPlaying;
	float playTimer;
	public GameObject eraser;
	float erasertimer=0.3f;
	int eraserCount;
	public GameObject backShot;
	int backCount=1;

	void Start () {
		speed = (float)Screen.width / (float)Screen.height * 20.0f;	
		move = true;
		gameManagerScript = gameManager.GetComponent<GameManagerScript> ();
		isPlaying = true;
	}

	void Update () {
		if (move && gameManagerScript.pausing == false) {
			Move ();
		}
		StartCoroutine ("Attack");

		if (move==false) {
			finishTimer += Time.deltaTime;
		}
		if(finishTimer > 0.2f){
			Time.timeScale = 1;
			finish = true;
		}
		if (isPlaying == false) {
			playTimer += Time.deltaTime;
		}
			
		if (playTimer > 2) {
			isPlaying = true;
			playTimer = 0;
		}
	}

	void Move(){
		
		if (Input.GetMouseButtonDown (0)) {
			preMousePos = Input.mousePosition;
		}
		if (Input.GetMouseButton (0)) {
			Vector3 mousePosDiff = Input.mousePosition - preMousePos;
			preMousePos = Input.mousePosition;
			Vector3 newPos = player.gameObject.transform.position + new Vector3 (mousePosDiff.x / Screen.width,0,mousePosDiff.y / Screen.width) * speed;
			if (newPos.x > 6.5f) {
				newPos = new Vector3 (6.5f, newPos.y, newPos.z);
			}
			if (newPos.x < -6.5f) {
				newPos = new Vector3 (-6.5f, newPos.y, newPos.z);
			}
			if (newPos.z > 9.5f) {
				newPos = new Vector3 (newPos.x, newPos.y, 9.5f);
			}
			if (newPos.z < -10) {
				newPos = new Vector3 (newPos.x, newPos.y, -10);
			}
			player.transform.position = newPos;
		}
	}
		
	
	IEnumerator	Attack(){
		timer += Time.deltaTime;
		if (timer > 0.4f) {
			timer = 0;
			Instantiate (bullet, this.transform.position + new Vector3(0,0,1.5f), Quaternion.Euler(0,0,30));
		}
		wideTimer += Time.deltaTime;
		if(wideTimer>1.7f){
			wideTimer = 0;
			for (int i = 0; i < wideCount; i++) {
				Instantiate (wideShot, new Vector3 (transform.position.x + 0.5f, 0, transform.position.z), Quaternion.Euler (0, 20, 45));
				Instantiate (wideShot, new Vector3 (transform.position.x - 0.5f, 0, transform.position.z), Quaternion.Euler (0, 340, 45));
				yield return new WaitForSeconds (0.15f);
			}
	    }
		LaserTimer += Time.deltaTime;
		if (LaserTimer > 1.7f) {
			LaserTimer = 0;
			for(int i=0; i < laserCount; i++){
				Instantiate (Laser, this.transform.position + new Vector3(0,0,2), Quaternion.Euler(0,0,45));
				yield return new WaitForSeconds (0.15f);
			}
		}
		twinTimer += Time.deltaTime;
		if (twinTimer > 1.7f) {
			twinTimer = 0;
			for(int i=0; i < twinCount; i++){
				Instantiate (twinShot, this.transform.position + new Vector3(0.4f,0,0), Quaternion.Euler(0,0,45));
				Instantiate (twinShot, this.transform.position - new Vector3(0.4f,0,0), Quaternion.Euler(0,0,45));
						yield return new WaitForSeconds (0.15f);
			}
		}
		homingTimer += Time.deltaTime;
		if (homingTimer > 1.7f) {
			homingTimer = 0;
			for(int i=0; i < homingCount; i++){
				Instantiate (homingShot, this.transform.position, Quaternion.Euler(0,0,45));
				yield return new WaitForSeconds (0.25f);
			}
		}
		erasertimer += Time.deltaTime;
		if (erasertimer > 1.7f) {
			erasertimer = 0;
			for(int i=0; i < eraserCount; i++){
				Instantiate (eraser, this.transform.position, Quaternion.identity);
				yield return new WaitForSeconds (0.25f);
			}
			for(int i=0; i < backCount; i++){
				Instantiate (backShot, this.transform.position, Quaternion.identity);
				yield return new WaitForSeconds (0.25f);
			}
		}
	}


		
	public void RankingScene(){
		SceneManager.LoadScene ("MyRanking");
	}
		
	public void ShowRewardedVideo ()
	{
		if (Advertisement.IsReady ()) {
			ShowOptions options = new ShowOptions ();
			options.resultCallback = HandleRewardedShowResult;
			Advertisement.Show ("rewardedVideo", options);
		} else {
			Debug.Log ("Ads not ready");
			//ユーザーに広告が表示できないエラーを表示

		}
	}

	void HandleRewardedShowResult (ShowResult result)
	{
		if(result == ShowResult.Finished) {
			Debug.Log("Video completed - Offer a reward to the player");
			Reward ();
		}else if(result == ShowResult.Skipped) {
			Debug.LogWarning("Video was skipped - Do NOT reward the player");
			finish = false;
			transform.position = new Vector3 (0, 0, -5);
		}else if(result == ShowResult.Failed) {
			Debug.LogError("Video failed to show");
			SceneManager.LoadScene ("Start");
		}
	}

	void Reward(){
		finish = false;
		transform.position = new Vector3 (0, 0, -5);
		move = true;
		finishTimer = 0;
		gameManagerScript.rewarded = true;
		gameManagerScript.Reward ();
		isPlaying = false;
		Instantiate (bomb);
	}

	void OnTriggerEnter(Collider col){
		if (col.gameObject.name == "GetLaser(Clone)") {
			Destroy (col.gameObject);
			laserCount++;
			gameManagerScript.textTimer = 0;
			information.text = "LASER";
			information.color = new Color (0, 0.4f, 0.95f, 1);
			GameObject Is = Instantiate (itemSound) as GameObject;
			Destroy (Is, 1);
		}
		if (col.gameObject.name == "GetTwin(Clone)") {
			Destroy (col.gameObject);
			twinCount++;
			gameManagerScript.textTimer = 0;
			information.text="TWIN SHOT";
			information.color = new Color (0, 0.4f, 0.95f, 1);
			GameObject Is = Instantiate (itemSound) as GameObject;
			Destroy (Is, 1);
		}
		if (col.gameObject.name == "GetWide(Clone)") {
			Destroy (col.gameObject);
			wideCount++;
			gameManagerScript.textTimer = 0;
			information.text="WIDE SHOT";
			information.color = new Color (0, 0.4f, 0.95f, 1);
			GameObject Is = Instantiate (itemSound) as GameObject;
			Destroy (Is, 1);
		}
		if (col.gameObject.name == "GetHomingShot(Clone)") {
			Destroy (col.gameObject);
			homingCount++;
			gameManagerScript.textTimer = 0;
			information.text="HOMING SHOT";
			information.color = new Color (0, 0.4f, 0.95f, 1);
			GameObject Is = Instantiate (itemSound) as GameObject;
			Destroy (Is, 1);
		}
		if (col.gameObject.name == "GetEraser(Clone)") {
			Destroy (col.gameObject);
			eraserCount++;
			gameManagerScript.textTimer = 0;
			information.text="ERASER";
			information.color = new Color (0, 0.4f, 0.95f, 1);
			GameObject Is = Instantiate (itemSound) as GameObject;
			Destroy (Is, 1);
		}
		if (col.gameObject.tag == "Enemy" || col.gameObject.tag == "Attack"){
			if (isPlaying) {
				Instantiate (effect, transform.position, Quaternion.identity);
				this.transform.position = new Vector3 (0, 0, -500);
				move = false;
				Time.timeScale = 0.3f;
			}
		}
	}
}
