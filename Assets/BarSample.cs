using ChartAndGraph;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class BarSample : MonoBehaviour
{
    public BarChart chart;
    private float Timer = 5f;
    // Start is called before the first frame update
    void Start()
    {
        chart.DataSource.SetValue("Fluxion", "Display", 6);
        chart.DataSource.SlideValue("Fluxion", "Software", 5, 5f);
        chart.DataSource.SlideValue("Fluxion", "Architecture", 6, 5f);
        chart.DataSource.SlideValue("Samsung", "Display", 10, 5f);
    }

    // click event
    public void OnBarClick(BarChart.BarEventArgs args)
    {
        Debug.Log("Bar clicked with category : " + args.Category + " with Group : " + args.Group + " with Value : " + args.Value);
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
