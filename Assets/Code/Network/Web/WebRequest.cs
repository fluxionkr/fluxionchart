using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public partial class WebClient : MonoBehaviour 
{
    public void SendProtocol(WEB_PROTOCOL protocol, params object[] keyValuePair)
	{
        Debug.Log("Send protocol : " + protocol.ToString());
		mCurProtocol = protocol;

        Dictionary<string, string> post = WebUtility.GetDataPakage(keyValuePair);

        post.Add("id", G.i.id);
		Post (getUrl(protocol), post);
	}


	private string getUrl(WEB_PROTOCOL protocol)
	{
		return CommonConfig.WebAddress + "/" + protocol.ToString();
	}

	private WEB_PROTOCOL mCurProtocol = WEB_PROTOCOL.None;
}
