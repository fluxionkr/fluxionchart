using UnityEngine;
using System.Collections;

public static class CommonConfig 
{
	public static string WebAddress = "localhost:9999/StarCrash";
}

public enum WEB_PROTOCOL
{
	None,
	Login,
    CreateAccount,
	UserList,
}
