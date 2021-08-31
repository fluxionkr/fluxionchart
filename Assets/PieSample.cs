using ChartAndGraph;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieSample : MonoBehaviour
{
    public PieChart chart;
    // Start is called before the first frame update
    void Start()
    {
        chart.DataSource.SetValue("Category 1", 10);
        chart.DataSource.SetValue("Category 2", 10);
        chart.DataSource.SetValue("Category 3", 10);
        chart.DataSource.SlideValue("Category 4", 10, 10f);

        
    }

    // click event
    public void PieClick(PieChart.PieEventArgs args)
    {
        Debug.Log("pie clicked with category " + args.Category + " with value : " + args.Value);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
