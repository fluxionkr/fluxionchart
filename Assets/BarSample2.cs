using ChartAndGraph;
using UnityEngine;

public class BarSample2 : MonoBehaviour
{
    public BarChart chart;
    private float Timer = 5f;
    // Start is called before the first frame update
    void Start()
    {
        
    }


    // Update is called once per frame
    void Update()
    {
        Timer -= Time.deltaTime;
        if(Timer <= 0f) {
            Timer = 5f;
            chart.DataSource.SlideValue("Fluxion", "Display", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("Fluxion", "Software", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("Fluxion", "Architecture", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("Samsung", "Display", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("Samsung", "Software", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("Samsung", "Architecture", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("LG", "Display", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("LG", "Software", UnityEngine.Random.Range(0, 8), 5f);
            chart.DataSource.SlideValue("LG", "Architecture", UnityEngine.Random.Range(0, 8), 5f);
        }  
    }
}
