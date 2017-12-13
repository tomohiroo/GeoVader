using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NCMB;
public class DataManager : MonoBehaviour
{
	[SerializeField]
	public List<HighScore> highScoreList = new List<HighScore> ();
	//global関数を定義　public static
	public static DataManager instance;
	public bool loaded;
	public bool getData;
	public int allPlayerCount;

	GameManagerScript gameManagerScript;

	[SerializeField]
	public List<int> rankScoreList = new List<int> ();
	public int[] scoreDivision;



	void Awake ()
	{
		if (instance == null) {
			DontDestroyOnLoad (this.gameObject);
			instance = this;
		} else {
			Destroy (this.gameObject);
		}
	}

	public void GetHighScoreData ()
	{
		loaded = false;
		getData = false;
		NCMBQuery<NCMBObject> query = new NCMBQuery<NCMBObject> ("HighScore");
		// クエリの条件を作成
		query.Limit=999;
		//降順に取得
		query.OrderByDescending ("score");
		//検索する
		query.FindAsync ((List<NCMBObject> objList, NCMBException e) => {
			if (e != null) {
				//検索失敗時の処理
				Debug.Log("データベースへのアクセスに失敗しました。");
				loaded = true;
			} else {
				//成功時の処理
				highScoreList.Clear ();
				foreach (NCMBObject obj in objList) {
					int s = System.Convert.ToInt32 (obj ["score"]);
					string n = System.Convert.ToString (obj ["name"]);
					//Debug.Log("score:" + s + ", name:" + n);
					//highScoreクラスのインスタンス化
					HighScore highScoreInstance = new HighScore ();
					highScoreInstance.name = n;
					highScoreInstance.score = s;
					//dataManagerのhighScoreList配列にhighScoreデータを追加する
					highScoreList.Add (highScoreInstance);
				}
				allPlayerCount = highScoreList.Count;
			//	ループ文回して、データを整理
				int scoreDivisionIndex = 0;
				for (int i = 0; i < highScoreList.Count; i++) {
					if(scoreDivision[scoreDivisionIndex] == i + 1){
						scoreDivisionIndex++;
						rankScoreList.Add(highScoreList [i].score);
					}
				}
				loaded=true;
				getData=true;
			}
		});
	}
}
