using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;


public class MyRankingSceneManaGerScript : MonoBehaviour {

	DataManager datamanager;
	int hiScore;
	int rank;
	public Text[] rankText = new Text[5];
	public Text[] scoreText = new Text[5];
	public Text[] nameText = new Text[5];
	int[] ranks = new int[5];
	int[] scores = new int[5];
	string[] names = new string[5];
	public GameObject afterRetryAds;
	public GameObject retryImage;
	// Use this for initialization
	void Start () {
		datamanager = GameObject.Find("DataManager").GetComponent<DataManager>();
		hiScore = PlayerPrefs.GetInt ("hiScore");
		rank = Rank ();
		if (rank > 2) {
			rankText [2].color = new Color (0.8627f, 0.8627f, 0.19607f);
			scoreText [2].color = new Color (0.8627f, 0.8627f, 0.19607f);
			nameText [2].color = new Color (0.8627f, 0.8627f, 0.19607f);
			rankText [2].text = rank + "th";
			scoreText [2].text = hiScore.ToString ();
			nameText [2].text = PlayerPrefs.GetString ("playerName");
			for (int i = 0; i < 2; i++) {
				ranks [i] = rank + i - 2;
				scores [i] = datamanager.highScoreList [rank + i - 3].score;
				names [i] = datamanager.highScoreList [rank + i - 3].name;
				rankText [i].text = ranks [i] + "th";
				scoreText [i].text = scores [i].ToString ();
				nameText [i].text = names [i];
			}
			for (int i = 3; i < 5; i++) {
				ranks [i] = rank + i - 2;
				scores [i] = datamanager.highScoreList [rank + i - 3].score;
				names [i] = datamanager.highScoreList [rank + i - 3].name;
				rankText [i].text = ranks [i] + "th";
				scoreText [i].text = scores [i].ToString ();
				nameText [i].text = names [i];
			}
		} else if (rank == 2) {
			rankText [1].color = new Color (0.8627f, 0.8627f, 0.19607f);
			scoreText [1].color = new Color (0.8627f, 0.8627f, 0.19607f);
			nameText [1].color = new Color (0.8627f, 0.8627f, 0.19607f);
			for (int i = 0; i < 5; i++) {
				scoreText [i].text = datamanager.highScoreList [i].score.ToString ();
				nameText [i].text = datamanager.highScoreList [i].name.ToString ();
			}
			nameText [1].text = PlayerPrefs.GetString ("playerName");
			rankText [0].text = "1st";
			rankText [1].text = "2nd";
			rankText [2].text = "3rd";
			rankText [3].text = "4th";
			rankText [4].text = "5th";

		} else if (rank == 1) {
			rankText [0].color = new Color (0.8627f, 0.8627f, 0.19607f);
			scoreText [0].color = new Color (0.8627f, 0.8627f, 0.19607f);
			nameText [0].color = new Color (0.8627f, 0.8627f, 0.19607f);
			for (int i = 0; i < 5; i++) {
				scoreText [i].text = datamanager.highScoreList [i].score.ToString ();
				nameText [i].text = datamanager.highScoreList [i].name.ToString ();
			}
			nameText [0].text = PlayerPrefs.GetString ("playerName");
			rankText [0].text = "1st";
			rankText [1].text = "2nd";
			rankText [2].text = "3rd";
			rankText [3].text = "4th";
			rankText [4].text = "5th";
		}
		if (rank == 3) {
			rankText [0].text = "1st";
			rankText [1].text = "2nd";
			rankText [2].text = "3rd";
		} else if (rank == 4) {
			rankText [0].text = "2nd";
			rankText [1].text = "3rd";
		} else if (rank == 5) {
			rankText [0].text = "3rd";
		}
	}


	//ランキングを出す関数
	int Rank(){
		//-------------------------yuki----------------------------
		//データの件数がすごく多くなった時のために、ループ数をなるべく減らす処理にした方がベターではある。
		//もっと言うと、現在の順位は、サーバー側にアクセスする方が端末の処理を軽くできてベター。
		//ただし、apiリクエストを送信出来る回数が、無料枠では限りがあるので、節約のために端末でやるというのも一つの手
		for(int i = 0; i<datamanager.highScoreList.Count; i++){
			if (hiScore >= datamanager.highScoreList [i].score) {
				return i + 1;
			}
		}
		return datamanager.highScoreList.Count;
	}

	public void MainScene(){
		if (Random.Range (0, 4) == 0) {
			ShowVideo ();
		} else {
			SceneManager.LoadScene ("Main");
		}
	}
	public void TopRanking(){
		SceneManager.LoadScene ("TopRanking");
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

}
