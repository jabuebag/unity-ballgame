using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerController : MonoBehaviour {

	private Rigidbody rb;

	public Text scoreTxt;
	public Text winTxt;

	public float speed;

	private int count;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
		count = 0;
		scoreTxt.text = "Score:" + count;
		winTxt.text = "";
	}

	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

//		float moveHorizontal = Input.acceleration.x;
//		float moveVertical = Input.acceleration.z;

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		rb.AddForce (movement * speed);
	}

	void OnTriggerEnter (Collider other) {
		if (other.gameObject.CompareTag ("pick up")) {
			other.gameObject.SetActive (false);
			count = count + 1;
			scoreTxt.text = "Score:" + count;
			if (count >= 4) {
				winTxt.text = "YOU WIN!";
			}
		}
	}
}
