using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class WebUtility : MonoBehaviour
{
    /*
     * parmeter pair
     * GetDataPakage(key1, value1, key2, value2)
     * */
    public static Dictionary<string, string> GetDataPakage(params object[] keyValuePair)
    {
        Dictionary<string, string> package = new Dictionary<string, string>();

        for (int index = 0; index < keyValuePair.Length; index += 2)
        {
            package.Add((string)keyValuePair[index], keyValuePair[index + 1].ToString()); 
        }

        return package;
    }
}

