using UnityEngine;
using System.Collections;

public class Global : MonoBehaviour {

	// Use this for initialization
	void Start () 
	{
        G.i.id = id;
        G.i.NickName = NickName;
        G.i.WebClient = WebClient;
        G.i.Managers = Managers;

        GameInit();
	}

    private void GameInit()
    {
        Managers.SceneManager.FirstSceneLoad();
        Managers.UIManager.FirstUILoad();
    }

    public string id;
    public string NickName;
    public WebClient WebClient;
    public Managers Managers;
}

public class G
{
	

	public static G i
	{
		get 
		{
			if(_instance == null)
				_instance = new G();

			return _instance;
		}
	}

	public WebClient WebClient
	{
        set { mWebClient = value; }
        get { return mWebClient; }
	}

	public string id
	{
        set { mID = value; }
        get { return mID; }
	}

    public string NickName
    {
        set { mNickName = value; }
        get { return mNickName; }
    }

    public Managers Managers
    {
        set { mManagers = value; }
        get { return mManagers; }
    }

    private static G _instance;

	private WebClient mWebClient;
    private Managers mManagers;

    private string mID;
    private string mNickName;
}
