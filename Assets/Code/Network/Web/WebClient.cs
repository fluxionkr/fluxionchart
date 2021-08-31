using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Net;

public partial class WebClient : MonoBehaviour 
{
	private WWW Get(string url)
	{
		WWW www = new WWW (url);
		StartCoroutine ("WaitForRequest", www);
		return www;
	}


	private WWW Post(string url, Dictionary<string, string> post)
	{
		WWWForm form = new WWWForm ();

		foreach (KeyValuePair<string, string> post_arg in post) 
		{
			form.AddField (post_arg.Key, post_arg.Value);
		}

		WWW www = new WWW(url, form);
		StartCoroutine ("WaitForRequest", www);
		return www;
	}


	private IEnumerator WaitForRequest(WWW www)
	{
		yield return www;

		if (www.error == null) 
		{
//			Debug.Log("www ok!:" + www.text);
			ReceiveProtocol(www.text);
		} 
		else 
		{
			Debug.Log("www error!:" + www.error);	
		}
	}
}
















