using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class InputManager : MonoBehaviour {

	InputField inputField;



	/// <summary>
	/// Startメソッド
	/// InputFieldコンポーネントの取得および初期化メソッドの実行
	/// </summary>
	void Start() {

		inputField = GetComponent<InputField>();

	}



	/// <summary>
	/// Log出力用メソッド
	/// 入力値を取得してLogに出力し、初期化
	/// </summary>


	public void InputLogger() {
		string inputValue = inputField.text;

		Debug.Log(inputValue);

		PlayerPrefs.SetString ("playerName", inputValue);	

		if (PlayerPrefs.HasKey ("hiScore")) {
			HighScore highScore = new HighScore ();
			highScore.name = PlayerPrefs.GetString ("playerName");
			highScore.score = PlayerPrefs.GetInt ("hiScore");
			highScore.SendData ();
		}

		Destroy (this.gameObject);
	}



}