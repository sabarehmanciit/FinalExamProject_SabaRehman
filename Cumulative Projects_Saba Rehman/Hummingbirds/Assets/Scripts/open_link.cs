using System.Collections;
using System.Collections.Generic;
using UnityEditor.PackageManager.UI;
using UnityEngine;

public class InstructorWebsite : MonoBehaviour
{
    
    public void openlink()
    {
      Window.Open("http://www.niazilab.com");  
      //Application.OpenURL("http://www.niazilab.com");
    }
}
