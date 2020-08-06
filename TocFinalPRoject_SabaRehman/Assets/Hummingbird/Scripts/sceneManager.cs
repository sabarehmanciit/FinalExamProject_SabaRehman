using UnityEngine;
using UnityEngine.SceneManagement;

public class sceneManager : MonoBehaviour {

	
    public void BackToMenu()
    {
        SceneManager.LoadScene("menu");
    }
    public void loadScene(string str)
    {
        SceneManager.LoadScene(str);

    }
}
