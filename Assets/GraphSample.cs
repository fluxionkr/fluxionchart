using ChartAndGraph;
using System.Collections;
using UnityEngine;
using System;
using UnityEngine.Networking;

public class GraphSample : MonoBehaviour
{
    public GraphChart chart;
    private float Timer = 1f;
    private float X = 4f;
    private int i = 0;
    public DataList dataList;
    // Start is called before the first frame update
    void Start()
    {
        chart.DataSource.StartBatch();

        Data data = new Data("8");

        //Convert JsonString
        string json = JsonUtility.ToJson(data);
        
        //request Post
        StartCoroutine(requestPost("https://cms.fluxion.kr/mobile/inqAccelometerLst", json));
        chart.DataSource.EndBatch();
    }

    // Update is called once per frame
    void Update()
    {

        Timer -= Time.deltaTime;
        if(Timer <= 0f) {
            Timer = 1f;
            if(dataList.content.Length <= i) {
                chart.DataSource.AddPointToCategoryRealtime("x", X, Double.Parse(dataList.content[i].x), 1f);
                chart.DataSource.AddPointToCategoryRealtime("y", X, Double.Parse(dataList.content[i].y), 1f);
                chart.DataSource.AddPointToCategoryRealtime("z", X, Double.Parse(dataList.content[i].z), 1f);
            }else{
                chart.DataSource.AddPointToCategoryRealtime("x", X, UnityEngine.Random.value, 1f);
                chart.DataSource.AddPointToCategoryRealtime("y", X, UnityEngine.Random.value, 1f);
                chart.DataSource.AddPointToCategoryRealtime("z", X, UnityEngine.Random.value, 1f);
            }

            X++;
            i++;
        }
    }

    IEnumerator requestPost(string URL, string json)
    {
        using (UnityWebRequest request = UnityWebRequest.Post(URL, json))
        {
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(request.error);
            }
            else
            {
                Debug.Log(request.downloadHandler.text);
                dataList = JsonUtility.FromJson<DataList>(request.downloadHandler.text);
            }
        }
    }

    [System.Serializable]
    public class DataList
    {
        public Data[] content;
    }
    [System.Serializable]
    public class Data
    {
        public string moveSeq;
        public string x;
        public string y;
        public string z;
        public string regMbrNo;
        public string regDt;
        public string accelometerSeq;
        public string squareRoot;
        public string hours;
        public Data(string moveSeq)
        {
            this.moveSeq = moveSeq;
        }

    }

    string ObjectToJson(object obj)
    {
        return JsonUtility.ToJson(obj);
    }

    T JsonToOject<T>(string jsonData)
    {
        return JsonUtility.FromJson<T>(jsonData);
    }


}
