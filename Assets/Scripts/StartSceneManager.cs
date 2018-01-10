using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public class StartSceneManager : MonoBehaviour {
	DataManager dataManager;
	public Text ErrorText;
	public GameObject inputName;
	public GameObject changeName;
	float nowLoadingTimer;
	// Use this for initialization
	void Start () {
		Advertisement.Initialize ("1616101");

		if (PlayerPrefs.HasKey ("playerName")) {
			changeName.SetActive (true);
		} else {
			inputName.SetActive (true);
		}
		dataManager = FindObjectOfType<DataManager> ();
//		-------------------------yuki----------------------------
		dataManager.GetHighScoreData();
//		-------------------------yuki----------------------------

		}

	void Update(){
		nowLoadingTimer += Time.deltaTime;
		if (dataManager.loaded) {
			if (dataManager.getData) {
				ErrorText.text = null;
			} else {
				ErrorText.text = "Not accesible to the data base.\nNow shifting to offline mode.";
			}
		} else if (nowLoadingTimer > 2.6f) {
			ErrorText.text = "Now Loading...";
			nowLoadingTimer = 0;
		} else if (nowLoadingTimer > 2.4f) {
			ErrorText.text = "Now Loading..";
		} else if (nowLoadingTimer > 2.2f) {
			ErrorText.text = "Now Loading.";
		} else if (nowLoadingTimer > 2) {
			ErrorText.text = "Now Loading";
		} else if (nowLoadingTimer > 1.8f) {
			ErrorText.text = "Now Loadin";
		} else if (nowLoadingTimer > 1.6f) {
			ErrorText.text = "Now Loadi";
		} else if (nowLoadingTimer > 1.4f) {
			ErrorText.text = "Now Load";
		} else if (nowLoadingTimer > 1.2f) {
			ErrorText.text = "Now Loa";
		} else if (nowLoadingTimer > 1) {
			ErrorText.text = "Now Lo";
		} else if (nowLoadingTimer > 0.8f) {
			ErrorText.text = "Now L";
		} else if (nowLoadingTimer > 0.6f) {
			ErrorText.text = "Now";
		} else if (nowLoadingTimer > 0.4f) {
			ErrorText.text = "No";
		} else if (nowLoadingTimer > 0.2f) {
			ErrorText.text="N";
		}
	}

	// Update is called once per frame
	public void GameStart(){
		if (dataManager.loaded && PlayerPrefs.HasKey("playerName")){
			SceneManager.LoadScene ("Main");
		}
	}
	public void RankingButton(){
		if (dataManager.getData && PlayerPrefs.HasKey("playerName")) {
			SceneManager.LoadScene ("MyRanking");
		}
	}

	public void ChangeName(){
		PlayerPrefs.DeleteKey ("playerName");
		SceneManager.LoadScene ("Start");
	}
}
