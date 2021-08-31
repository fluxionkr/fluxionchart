using UnityEngine;
using System.Collections;
using System.Reflection;

public partial class WebClient : MonoBehaviour
{
	public void ReceiveProtocol(string data)
	{
        Debug.Log("Response data = " + data);

		IProtocol protocol = getProtocol("P" + mCurProtocol.ToString());
		if(protocol != null)protocol.excute(data);
	}


	private IProtocol getProtocol(string className)
	{
		Assembly assembly = Assembly.GetExecutingAssembly();

		object obj = assembly.CreateInstance(className);

		return (IProtocol)obj;
	}
}

