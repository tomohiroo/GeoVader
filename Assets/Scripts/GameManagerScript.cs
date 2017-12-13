using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using NCMB;
using UnityEngine.SceneManagement;
using UnityEngine.Advertisements;

public class GameManagerScript : MonoBehaviour
{
	public GameObject player;
	public GameObject[] enemy;
	public GameObject[] boss;
	public float timer;
	float boolTimer = 0;
	bool isGenerate;
	public int score;
	public Text scoreText;
	public Text informationText;
	public float textTimer;
	PlayerManager playerManager;
	public Text lastScoreText;
	public Text hiScoreText;
	int hiScore;
	public Text button;
	public Text scoreLabel;
	public Text nowScoreText;
	public Text gameover;
	public GameObject image;
	DataManager datamanager;
	public Text rankText;
	public Text originalNumberText;
	public Text rankText1;
	public Text originalNumberText1;
	public Text newHighScoreText;
	public GameObject rankingButton;
	public GameObject adsButton;
	public bool rewarded;
	bool bombed;
	public GameObject bomb;
	float bossTimer;
	public Text nextRank;
	public GameObject afterRetryAds;
	public GameObject retryImage;
	public GameObject pauseButton;
	public bool pausing;
	public Text pauseButtonText;
	public GameObject bombButton;

	//-------------------------yuki----------------------------
	public int currentRankIndex;
	//-------------------------yuki----------------------------


	void Start ()
	{
		AudioListener.volume = 0.5f;
		playerManager = player.GetComponent<PlayerManager> ();

		datamanager = GameObject.Find("DataManager").GetComponent<DataManager>();
		if (datamanager.getData) {
				//新しいランキングデータを取得する(DateManagerのインスタンス化)
			//-------------------------yuki----------------------------
			SetFirstCurrentRankIndex ();
			//-------------------------yuki----------------------------
		}
	}


	//-------------------------yuki----------------------------
	void SetFirstCurrentRankIndex(){
		for(int i = 0; i < datamanager.scoreDivision.Length; i++){
			if(datamanager.scoreDivision[i] > datamanager.allPlayerCount){
				return;
			}
			currentRankIndex = i;
			rankText.text = datamanager.scoreDivision[currentRankIndex+1].ToString();
			originalNumberText.text = "th";
			nextRank.text = "Next " + datamanager.rankScoreList [currentRankIndex];
		}
	}
	//-------------------------yuki----------------------------

	//-------------------------yuki----------------------------
	void UpdateRankText(){
		if (score > datamanager.rankScoreList [currentRankIndex]) {
			currentRankIndex--;
			rankText.text = datamanager.scoreDivision [currentRankIndex + 1].ToString ();
			if (datamanager.scoreDivision [currentRankIndex + 1] != 1) {
				nextRank.text = "Next " + datamanager.rankScoreList [currentRankIndex];
			}
			if (datamanager.scoreDivision [currentRankIndex + 1] == 1) {
				originalNumberText.text = "st";
			} else if (datamanager.scoreDivision [currentRankIndex + 1] == 2) {
				originalNumberText.text = "nd";
			} else if (datamanager.scoreDivision [currentRankIndex + 1] == 3) {
				originalNumberText.text = "rd";
			}
			textTimer = 0;
			informationText.color = new Color (0.8627f, 0.8627f, 0.19607f);
			informationText.text = "RANK UP " + datamanager.scoreDivision [currentRankIndex + 2] + " → " + datamanager.scoreDivision [currentRankIndex + 1];
		}
	}
	//-------------------------yuki----------------------------




	void Update ()
	{
		if (datamanager.getData) {
			//-------------------------yuki----------------------------
			if (currentRankIndex > -1) {
				UpdateRankText ();
			}
			//-------------------------yuki----------------------------
		}
		if (playerManager.finish == false) {
			timer += Time.deltaTime;
			boolTimer += Time.deltaTime;

			if (boolTimer > 5) {
				isGenerate = true;
				boolTimer = 0;
				Debug.Log (timer.ToString ());
			}

			if (isGenerate && timer < 6) {
				Instantiate (enemy [1], new Vector3 (this.transform.position.x + Random.Range (-5, 5), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [0], new Vector3 (this.transform.position.x + Random.Range (-5, 5), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [1], new Vector3 (this.transform.position.x + Random.Range (-5, 5), 0, this.transform.position.z), this.transform.rotation);
			}

			if (isGenerate && 9 < timer && timer < 11) {
				Instantiate (enemy [1], new Vector3 (this.transform.position.x + Random.Range (-5, 5), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [3], new Vector3 (this.transform.position.x + Random.Range (-5, 5), 0, this.transform.position.z), this.transform.rotation);
			}

			if (isGenerate && 14 < timer && timer < 17) {
				Instantiate (enemy [0], new Vector3 (this.transform.position.x + Random.Range (-5, -3), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [0], new Vector3 (this.transform.position.x + Random.Range (-2, 0), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [0], new Vector3 (this.transform.position.x + Random.Range (0, 2), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [0], new Vector3 (this.transform.position.x + Random.Range (3, 5), 0, this.transform.position.z), this.transform.rotation);
				Instantiate (enemy [0], new Vector3 (this.transform.position.x + Random.Range (3, 5), 0, this.transform.position.z), this.transform.rotation);
			}
			if (timer > 20 && timer < 50) {
				boolTimer += Time.deltaTime / 5;
				if (isGenerate) {
					GenerateEnemy1 (Random.Range (0, 5));
				}
			}
			
			if (timer > 50 && timer < 55) {
				if (isGenerate) {
					Instantiate (boss [Random.Range (0, boss.Length)]);
					informationText.text = "Boss is coming!!";
					informationText.color = new Color (0.8f, 0.2f, 0.1f);
					textTimer = 0;
				}
			}

			if (timer > 55 && timer < 70) {
				boolTimer -= Time.deltaTime / 3;
				if (isGenerate) {
					GenerateEnemy1 (Random.Range (0, 5));
				}
			}
			if (timer > 71 && timer < 90) {
				boolTimer += Time.deltaTime / 4;
				if (isGenerate) {
					StartCoroutine ("GenerateEnemy2");
				}
			}
			if (timer > 91 && timer < 120) {
				boolTimer += Time.deltaTime / 4;
				if (isGenerate) {
					StartCoroutine ("GenerateEnemy3");
				}
			}
			if (timer > 121 && timer < 126 && isGenerate) {
				Instantiate (boss [Random.Range (0, boss.Length)]);
				textTimer = 0;
				informationText.text = "Boss is coming!!";
				informationText.color = new Color (0.8f, 0.2f, 0.1f);
			}
			if (timer > 127 && timer < 140) {
				boolTimer -= Time.deltaTime / 3;
				if (isGenerate) {
					StartCoroutine ("GenerateEnemy3");
				}
			}
			if (timer > 141 && timer < 160) {
				boolTimer += Time.deltaTime / 4;
				if (isGenerate) {
					StartCoroutine ("GenerateEnemy3");
				}
			}
			if (timer > 160 && timer < 165 && isGenerate) {
				Instantiate (boss [Random.Range (0, boss.Length)]);
				textTimer = 0;
				informationText.text = "Boss is coming!!";
				informationText.color = new Color (0.8f, 0.2f, 0.1f);
			}
			if (timer > 165 && timer < 180) {
				boolTimer += Time.deltaTime / 4;
				if (isGenerate) {
					StartCoroutine ("GenerateEnemy3");
					GenerateEnemy1 (Random.Range (0, 5));
				}
			}

			if (timer > 185 && timer < 190 && isGenerate) {
				Instantiate (boss [Random.Range (0, boss.Length)]);
				textTimer = 0;
				informationText.text = "Boss is coming!!";
				informationText.color = new Color (0.8f, 0.2f, 0.1f);

				Instantiate (enemy [4], new Vector3 (0, 0, transform.position.z), Quaternion.identity);
				Instantiate (enemy [4], new Vector3 (3, 0, transform.position.z), Quaternion.identity);
				for (float i = 0; i < 5; i++) {
					Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
				}
				Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
				for (float i = 0; i < 5; i++) {
					Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
				}
			}

			if (timer > 190 && timer < 195 && isGenerate) {
				StartCoroutine ("GenerateEnemy3");
				StartCoroutine ("GenerateEnemy2");
			}

			if (timer > 195 && timer < 220) {
				boolTimer += Time.deltaTime / 4;
				if (isGenerate) {
					StartCoroutine ("GenerateEnemy3");
					StartCoroutine ("GenerateEnemy4");
				}
			}

			if (timer > 210 && timer < 214 && isGenerate) {
				Instantiate (boss [Random.Range (0, boss.Length)]);
				textTimer = 0;
				informationText.text = "Boss is coming!!";
				informationText.color = new Color (0.8f, 0.2f, 0.1f);
			}

			if (timer > 220) {
				bossTimer += Time.deltaTime;
				boolTimer += Time.deltaTime / 5;
				if (bossTimer > 15) {
					Instantiate (boss [Random.Range (0, boss.Length)]);
					textTimer = 0;
					informationText.text = "Boss is coming!!";
					informationText.color = new Color (0.8f, 0.2f, 0.1f);
					bossTimer = 0;
				}
				if (isGenerate) {
					int rand = Random.Range (0, 6);
					if (rand == 0) {
						GenerateEnemy1 (Random.Range(0,5));
						StartCoroutine ("GenerateEnemy2");
						StartCoroutine ("GenerateEnemy2");
					} else if (rand == 1) {
						StartCoroutine ("GenerateEnemy2");
						StartCoroutine ("GenerateEnemy3");
					} else if (rand == 2) {
						StartCoroutine ("GenerateEnemy4");
						GenerateEnemy1 (Random.Range(0,5));
					} else if (rand == 3) {
						StartCoroutine ("GenerateEnemy3");
						StartCoroutine ("GenerateEnemy3");
					} else if (rand == 4) {
						StartCoroutine ("GenerateEnemy3");
						StartCoroutine ("GenerateEnemy4");
					} else if (rand == 5) {
						StartCoroutine ("GenerateEnemy4");
						StartCoroutine ("GenerateEnemy4");
						StartCoroutine ("GenerateEnemy3");
						StartCoroutine ("GenerateEnemy3");
					}
				}
			}
			if (timer > 250) {
				boolTimer += Time.deltaTime / 4;
				bossTimer += Time.deltaTime / 5;
			}
			if (timer > 280) {
				boolTimer += Time.deltaTime / 4;
				bossTimer += Time.deltaTime / 4;
			}
			if (timer > 300) {
				boolTimer += Time.deltaTime / 4;
				bossTimer += Time.deltaTime / 4;
			}

			if (timer > 315) {
				boolTimer += Time.deltaTime / 4;
				bossTimer += Time.deltaTime / 4;
			}

			if (timer > 300) {
				boolTimer += Time.deltaTime / 4;
				bossTimer += Time.deltaTime / 4;
			}

			isGenerate = false;
			scoreText.text = score.ToString();

			if (informationText.text != "") {
				textTimer += Time.deltaTime;
			}
			if (textTimer > 2) {
				informationText.text = "";
				textTimer = 0;
			}

			if (Input.GetKeyDown ("space")) {
				Bomb ();
			}

		} else {
			//終わった時の処理
			informationText.text=null;
			nextRank.gameObject.SetActive(false);
			AudioListener.volume = 0;
			rankText.gameObject.SetActive (false);
			rankText1.text = rankText.text;
			originalNumberText1.text = originalNumberText.text;
			image.SetActive (true);
			lastScoreText.text = score.ToString ();
			button.text = "RESTART";
			scoreLabel.text = null;
			nowScoreText.text = null;
			gameover.text = "GAME OVER";
			if (PlayerPrefs.HasKey ("hiScore")) {
				hiScore = PlayerPrefs.GetInt ("hiScore");
			}
			if (hiScore < score) {
				hiScore = score;
				newHighScoreText.text = "New High Score!";
				PlayerPrefs.SetInt ("hiScore", hiScore);

				if (PlayerPrefs.HasKey ("playerName") == false) {
					PlayerPrefs.SetString ("playerName", "no name");			
				}		
				//データを送る
				HighScore highScore = new HighScore ();
				highScore.name = PlayerPrefs.GetString ("playerName");
				highScore.score = hiScore;
				highScore.SendData ();
				datamanager.GetHighScoreData ();
			}
			hiScoreText.text = "TOP " + hiScore.ToString ();
			if (datamanager.getData) {
				rankingButton.SetActive (true);
			}
			if (rewarded == false&&Advertisement.IsReady()) {
				adsButton.SetActive (true);
			}
			pauseButton.SetActive (false);
		}
	}

	//以下具体的な敵の出方
	void GenerateEnemy1 (int rand)
	{
		if (rand == 0) {
			float genPos = Random.Range (-5, 5);
			for (float i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (this.transform.position.x + genPos, 0, this.transform.position.z - i * 1.5f), this.transform.rotation);
			}
		}

		if (rand == 1) {
			for (float i = 0; i < 3; i++) {
				Instantiate (enemy [0], new Vector3 (-3, 0, transform.position.z - i * 1.5f), transform.rotation);
				Instantiate (enemy [0], new Vector3 (3, 0, transform.position.z - i * 1.5f), transform.rotation);
			}
		}

		if (rand == 2) {
			for (int i = 0; i < 5; i++) {
				Instantiate (enemy [0], new Vector3 (-4 + i * 2, 0, transform.position.z - Random.Range (0, 3)), transform.rotation);
			}
		}

		if (rand == 3) {
			for (int i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (-4 + i * 2, 0, transform.position.z - Random.Range (0, 3)), transform.rotation);
			}
		}

		if (rand == 4) {
			Instantiate (enemy [2], new Vector3 (0, 0, transform.position.z), transform.rotation);
			Instantiate (enemy [1], new Vector3 (-1, 0, transform.position.z + 3), transform.rotation);
			Instantiate (enemy [1], new Vector3 (1, 0, transform.position.z + 3), transform.rotation);
			Instantiate (enemy [0], new Vector3 (0, 0, transform.position.z + 5), transform.rotation);
		}
	}

	IEnumerator GenerateEnemy2 ()
	{
		int rand = Random.Range (0, 5);
		float genPos = Random.Range (-5, 5);
		if (rand == 0) {
			Instantiate (enemy [4], new Vector3 (genPos, 0, transform.position.z), Quaternion.identity);
			for (float i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
			}
		}

		if (rand == 1) {
			Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
			for (float i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
			}
		}
		if (rand == 2) {
			for (int i = 0; i < 6; i++) {
				Instantiate (enemy [1], new Vector3 (9, 0, 6), Quaternion.Euler (0, 270, 0));
				yield return new WaitForSeconds (0.5f);
			}
			for (int i = 0; i < 6; i++) {
				Instantiate (enemy [1], new Vector3 (-9, 0, 4.5f), Quaternion.Euler (0, 90, 0));
				yield return new WaitForSeconds (0.5f);
			}
		}
		if (rand == 3) {
			Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
			Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
		}
		if (rand == 4) {
			for (int i = 0; i < 10; i++) {
				Instantiate (enemy [0], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z), transform.rotation);
				yield return new WaitForSeconds (0.4f);
			}
		}
	}

	IEnumerator GenerateEnemy3 ()
	{
		int rand = Random.Range (0, 5);
		float genPos = Random.Range (-5, 5);
		if (rand == 0) {
			Instantiate (enemy [4], new Vector3 (genPos, 0, transform.position.z), Quaternion.identity);
			for (float i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
			}
		}

		if (rand == 1) {
			Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
			for (float i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
			}
		}
		if (rand == 2) {
			Instantiate (enemy [2], new Vector3 (genPos, 0, transform.position.z), transform.rotation);
			for (int i = 0; i < 6; i++) {
				Instantiate (enemy [1], new Vector3 (9, 0, 6), Quaternion.Euler (0, 270, 0));
				yield return new WaitForSeconds (0.5f);
			}
			for (int i = 0; i < 6; i++) {
				Instantiate (enemy [1], new Vector3 (-9, 0, 4.5f), Quaternion.Euler (0, 90, 0));
				yield return new WaitForSeconds (0.5f);
			}
		}
		if (rand == 3) {
			Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
			Instantiate (enemy [5], new Vector3 (player.transform.position.x, 0, transform.position.z), transform.rotation);
			for (float i = 0; i < 5; i++) {
				Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z + i * 1.5f), this.transform.rotation);
			}
		}
		if (rand == 4) {
			Instantiate (enemy [2], new Vector3 (genPos, 0, transform.position.z), transform.rotation);
			for (int i = 0; i < 10; i++) {
				Instantiate (enemy [0], new Vector3 (Random.Range (-5, 5), 0, this.transform.position.z), transform.rotation);
				yield return new WaitForSeconds (0.4f);
			}
		}
	}

	IEnumerator GenerateEnemy4 ()
	{
		int rand = Random.Range (0, 3);
		if (rand == 0) {
			Instantiate (enemy [4], new Vector3 (7.5f, 0, -1), Quaternion.Euler (0, 90, 0));
			Instantiate (enemy [4], new Vector3 (-7.5f, 0, 0), Quaternion.Euler (0, 270, 0));	
		}
		if (rand == 1) {
			Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, -11), Quaternion.Euler (0, 0, 0));	
			Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, -13), Quaternion.Euler (0, 0, 0));	
			Instantiate (enemy [1], new Vector3 (Random.Range (-5, 5), 0, -12), Quaternion.Euler (0, 0, 0));	
		}
		if (rand == 2) {
			for (int i = 0; i < 4; i++) {
				Instantiate (enemy [0], new Vector3 (Random.Range (-5, 5), 0, -11), transform.rotation);
				yield return new WaitForSeconds (0.4f);
			}
		}
	}
		
	public void Reward(){
		AudioListener.volume = 0.5f;
		//これずれるかも
		rankText1.text = null;
		originalNumberText1.text = null;
		image.SetActive (false);
		lastScoreText.text = null;
		button.text = "Bomb";
		scoreLabel.text = "SCORE";
		nowScoreText.text = score.ToString();
		gameover.text = null;
		hiScoreText.text = null;
		rankingButton.SetActive (false);
		adsButton.SetActive (false);
		newHighScoreText.text = null;
		rankText.gameObject.SetActive (true);
		nextRank.gameObject.SetActive(true);
		pauseButton.SetActive (true);
	} 

	public void Bomb(){
		if (playerManager.finish == false) {
			if (bombed==false) {
				Instantiate (bomb, player.transform.position, Quaternion.identity);
				bombed = true;
				bombButton.GetComponent<Image> ().color = new Color (0.4f, 0.4f, 0.4f, 0.6f);
			}
		}else if(Advertisement.IsReady() && Random.Range(0,4)==0){
			ShowVideo();
		}else{
			SceneManager.LoadScene("Main");
		}
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

	public void Pause(){
		if (pausing) {
			Time.timeScale = 1;
			AudioListener.volume = 0.5f;
			pausing = false;
			pauseButtonText.text="Pause";
		} else {
			Time.timeScale = 0;
			AudioListener.volume = 0;
			pausing = true;
			pauseButtonText.text="Continue";
		}
	}

}
