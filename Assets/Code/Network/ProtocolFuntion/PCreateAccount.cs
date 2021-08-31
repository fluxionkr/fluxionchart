using UnityEngine;
using SimpleJSON;
using System.Collections;

public class PCreateAccount : IProtocol
{
    public void excute(string data)
    {
        Debug.Log("PCreateAccount : " + data);
        var N = JSON.Parse(data);
        string id = N["id"].Value;

        if(!id.Equals("-1"))Debug.Log("Account Create Sucsess");

        G.i.Managers.UIManager.SendMessage("TitleSceneUI", "ShowLogin");
    }
}

