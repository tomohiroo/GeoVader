using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using NCMB;

[Serializable]
public class HighScore {

	public string name;
	public int score;

	public void SendData ()
	{
		// クラスのNCMBObjectを作成
		NCMBObject obj = new NCMBObject ("HighScore");

		// オブジェクトに値を設定
		if (PlayerPrefs.HasKey ("objectId")) {
			obj.ObjectId = PlayerPrefs.GetString ("objectId");
		}

		obj ["name"] = name;
		obj ["score"] = score;
		obj.SaveAsync ((NCMBException e) => {      
			if (e != null) {
				//エラー処理
			} else {
				//成功時の処理
				PlayerPrefs.SetString ("objectId", obj.ObjectId);
			}                   
		});
	}
}
