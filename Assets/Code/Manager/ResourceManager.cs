using UnityEngine;
using System.Collections;

public class ResourceManager : MonoBehaviour 
{
    public GameObject LoadScene(string name)
    {
        string path = "Scenes/" + name;
        return LoadResource(path);
    }

    public GameObject LoadUI(string name)
    {
        string path = "UIs/" + name;
        return LoadResource(path);
    }

    private GameObject LoadResource(string path)
    {
        Object resource = Resources.Load(path);

        if (resource != null)
        {
            GameObject obj = GameObject.Instantiate(resource) as GameObject;
            obj.name = CloneStringRemove(obj.name);
            return obj;
        }

        return null;
    }

    private string CloneStringRemove(string name)
    {
        return name.Replace("(Clone)", "");
    }
}
