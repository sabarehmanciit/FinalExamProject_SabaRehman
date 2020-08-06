//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;
//using UnityEngine.SceneManagement;

//public class open_link : MonoBehaviour
//{

//    //public void openURL()
//    //{
//    //    Application.OpenURL("http://www.niazilab.com");
//    //}
//    public void WebLink()
//    {
//        Application.OpenURL("http://www.niazilab.com");
//    }



//    public void Return()
//    {
//        SceneManager.LoadScene("MainMenu");
//    }
//}
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class open_link : MonoBehaviour
{

    public void openURL()
    {

        // Application.ExternalEval("window.open(\"http://www.unity3d.com\")");

        Application.OpenURL("http://www.niazilab.com");
    }

}
