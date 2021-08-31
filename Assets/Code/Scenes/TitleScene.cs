using UnityEngine;
using System.Collections;

public class TitleScene : Scene 
{
    void Start()
    {
        LoadScene();
    }

    public void LoadScene()
    {
        G.i.WebClient.SendProtocol(WEB_PROTOCOL.Login);
    }

    public void ReleaseScene()
    {

    }
}
