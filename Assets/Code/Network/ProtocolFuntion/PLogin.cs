using UnityEngine;
using SimpleJSON;
using System.Collections;
using System.Collections.Generic;

public class PLogin : IProtocol
{
	public void excute(string data)
	{
        Debug.Log("PLogin : " + data);

		var N = JSON.Parse(data);

		string id = N["id"].Value;

        if (id.Equals("-1"))
        {
            G.i.Managers.UIManager.SendMessage("TitleSceneUI", "ShowCreateAccount");
        }
        else
        {
            string nickName = N["nickName"].Value;
            string createDate = N["createDate"].Value;
            string accessDate = N["accessDate"].Value;
            
            System.DateTime cTime = System.DateTime.Parse(createDate);
            System.DateTime aTime = System.DateTime.Parse(accessDate);

            G.i.NickName = nickName;

            G.i.Managers.UIManager.SendMessage("TitleSceneUI", "HideAll");
        }
    }
}

