using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class sceneback : MonoBehaviour
{
    public void Return()
    {
        SceneManager.LoadScene("Palindrome_menu");
    }
}
