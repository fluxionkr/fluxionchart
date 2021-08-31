using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class UIManager : MonoBehaviour 
{
    public void FirstUILoad()
    {
        LoadUI(FirstUIName);
    }
    
    public void LoadUI(string UIName)
    {
        RemoveUI();
        ClearUIs();

        CreateUI(UIName);
        SetNewPrefab(LoadUIPrefab);
        AddUIs();
    }

    private void CreateUI(string UIName)
    {
        LoadUIPrefab = G.i.Managers.ResourceManager.LoadUI(UIName);
    }

    private void RemoveUI()
    {
        if (LoadUIPrefab != null)GameObject.Destroy(LoadUIPrefab);
    }

    private void SetNewPrefab(GameObject LoadScenePrefab)
    {
        LoadScenePrefab.transform.parent = transform;
    }

    private void AddUIs()
    {
        foreach(MonoBehaviour child in LoadUIPrefab.GetComponentsInChildren<MonoBehaviour>())
        {
            GameObject gameobject = child.gameObject;
            AddUIObject(gameobject.name, gameobject);
        }
    }

    private void ClearUIs()
    {
        mUIMap.Clear();
    }
  
    private void AddUIObject(string name, GameObject gameObject)
    {
        mUIMap.Add(name, gameObject);
    }

    private bool RemoveUIObject(string name)
    {
        return mUIMap.Remove(name);
    }

    public bool SendMessage(string name, string mehotd)
    {
        GameObject ui = null;
        if(mUIMap.TryGetValue(name, out ui))
        {
            ui.SendMessage(mehotd);
            return true;
        }

        return false;
    }

    public bool isContainsUI(string name)
    {
        if(mUIMap.ContainsKey(name))
        {
            return true;
        }

        return false;
    }

    private Dictionary<string, GameObject> mUIMap = new Dictionary<string, GameObject>();
    private GameObject LoadUIPrefab;

    public string FirstUIName;
}
