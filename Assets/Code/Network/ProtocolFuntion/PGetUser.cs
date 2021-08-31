using UnityEngine;
using SimpleJSON;
using System.Collections;

public class PGetUser : IProtocol 
{
	public void excute(string data)
	{
		Debug.Log("Protocol_GetUser : " + data);
		var N = JSON.Parse(data);

		string nickName = N["nickName"].Value;
		string createDate = N["createDate"].Value;
		string accessDate = N["accessDate"].Value;

		System.DateTime cTime = System.DateTime.Parse(createDate);
		System.DateTime aTime = System.DateTime.Parse(accessDate);

		Debug.Log("nickName = " + nickName + ", createDate = " + createDate + ", accessDate = " + accessDate + ", cTime = " + cTime + ", aTime = " + aTime);
	}
}
