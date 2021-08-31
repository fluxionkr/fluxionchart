using UnityEngine;
using System.Collections;
using System.Reflection;

public class SceneManager : MonoBehaviour 
{
    public void FirstSceneLoad()
    {
        LoadScene(FirstSceneName);
    }

    public void LoadScene(string SceneName)
    {
        GameObject LoadScenePrefab = G.i.Managers.ResourceManager.LoadScene(SceneName);
        Scene LoadScene = LoadScenePrefab.GetComponent<Scene>();

        if(CurSecen != null)CurSecen.ReleaseScene();

        SetNewPrefab(LoadScenePrefab);
        SetNewScene(LoadScene);
    }

    private void SetNewPrefab(GameObject LoadScenePrefab)
    {
        LoadScenePrefab.transform.parent = transform;
    }

    private void SetNewScene(Scene LoadScene)
    {
        CurSecen = LoadScene;
    }

    public Scene CurSecen
    {
        set { mScene = value; }
        get { return mScene; }
    }

    private Scene mScene = null;
    public string FirstSceneName;
}
