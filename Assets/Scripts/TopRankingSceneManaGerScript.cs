using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class TopRankingSceneManaGerScript : MonoBehaviour {

	DataManager datamanager;
	public Text[] topScoreText = new Text[5];
	public Text[] topNameText = new Text[5];
	public GameObject afterRetryAds;
	public GameObject retryImage;
	// Use this for initialization
	void Start () {
		datamanager = GameObject.Find ("DataManager").GetComponent<DataManager> ();
		for (int i = 0; i < 5; i++) {
			topScoreText [i].text = datamanager.highScoreList [i].score.ToString ();
			topNameText [i].text = datamanager.highScoreList [i].name.ToString ();
		}
	}
	public void MainScene(){
		if (Random.Range (0, 4) == 0) {
			ShowVideo ();
		} else {
			SceneManager.LoadScene ("Main");
		}
	}
	public void MyRank(){
		SceneManager.LoadScene ("MyRanking");
	}

	public void ShowVideo ()
	{
		if (Advertisement.IsReady ()) {
			Advertisement.Show ();
		}			
		afterRetryAds.SetActive (true);
		retryImage.SetActive (true);
	}
	public void PushAfterRetryAds()
	{
		SceneManager.LoadScene("Main");
	}
//	void HandleShowResult (ShowResult result)
//	{
//		if(result == ShowResult.Finished) {
//			Debug.Log("Video completed - Offer a reward to the player");
//			SceneManager.LoadScene ("Main");
//		}else if(result == ShowResult.Skipped) {
//			Debug.LogWarning("Video was skipped - Do NOT reward the player");
//			SceneManager.LoadScene ("Main");
//		}else if(result == ShowResult.Failed) {
//			Debug.LogError("Video failed to show");
//			SceneManager.LoadScene ("Main");
//		}
//	}
}
