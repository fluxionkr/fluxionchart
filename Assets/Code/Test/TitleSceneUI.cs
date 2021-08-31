using UnityEngine;
using System.Collections;

public class TitleSceneUI : MonoBehaviour 
{
    void OnGUI()
    {
        GUILayout.BeginArea(new Rect(0,0,300,500));
        {
            GUILayout.Label("State : " + Message);

            if (isCreateAccount)
            {
                if(GUILayout.Button("CreateAccount"))
                {
                    G.i.WebClient.SendProtocol(WEB_PROTOCOL.CreateAccount, "nickName", G.i.NickName);
                }
            }

            if (isLogin)
            {
                if(GUILayout.Button("Login"))
                {
                    G.i.WebClient.SendProtocol(WEB_PROTOCOL.Login);
                }
            }
        }
        GUILayout.EndArea();
    }


    public void ShowCreateAccount()
    {
        Message = "Access Fail. Not found ID.";

        isCreateAccount = true;
        isLogin = false;
    }

    public void ShowLogin()
    {
        Message = "Account Create Success";

        isCreateAccount = false;
        isLogin = true;
    }

    public void HideAll()
    {
        isCreateAccount = false;
        isLogin = false;

        Message = "Login Success. ID : " + G.i.id + ", nickName : " + G.i.NickName;
    }


    private bool isCreateAccount = false;
    private bool isLogin = false;

    private string Message = "";
}
