using UnityEngine;
using System.Collections;

public class User : MonoBehaviour 
{
	public string id
	{
		get{ return mID; }
		set{ mID = value; }
	}

	public string ID
	{
        get{ return mNickName; }
        set{ mNickName = value; }
	}

	public string CreateDate
	{
		get{ return mCreateDate; }
		set{ mCreateDate = value; }
	}

	public string AccessDate
	{
		get{ return mAccessDate; }
		set{ mAccessDate = value; }
	}

	private string mID;
    private string mNickName;
	private string mCreateDate;
	private string mAccessDate;
}
