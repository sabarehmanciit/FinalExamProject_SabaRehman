using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
public class Spawner11 : MonoBehaviour
{
    public float sphereRadius;
    public GameObject spawn;
    public float spanWait;
    public float spanMostWait;
    public float spanLeastWait;
    public int startWait;
    // Use this for initialization
    void Start()
    {
        StartCoroutine(WaitSpanner());
    }
    // Update is called once per frame
    void Update()
    {
        spanWait = Random.Range(spanLeastWait, spanMostWait);
    }
    private IEnumerator WaitSpanner()
    {
        yield return new WaitForSeconds(startWait);
        var palindromeLength = Random.Range(3, 10);
        var list = new List<int>();
        for (var i = 0; i < palindromeLength; i++)
        {
            var randomNumber = Random.Range(0, 9);
            if (!list.Contains(randomNumber) || list.Count == 0)
            {
                list.Add(randomNumber);
            }
            else
            {
                palindromeLength += 1;
            }
        }
        for (var i = 0; i < 10; i++)
        {
            var randomString = "";
            var characters = new[] { "x", "s", "3" };
            var strengthening = Random.Range(9, 15);
            if (list.Contains(i))
            {
                for (var j = 0; j < strengthening / 2; j++)
                {
                    randomString += characters[Random.Range(0, characters.Length)];
                }
                randomString += new string(randomString.Reverse().ToArray());
            }
            else
            {
                for (var j = 0; j < strengthening; j++)
                {
                    randomString += characters[Random.Range(0, characters.Length)];
                }
            }
            var spanPosition = new Vector3(Random.Range(-15f, 15f), Random.Range(0f, 15f), Random.Range(-15f, 15f));
            if (!Physics.CheckSphere(spanPosition, sphereRadius) && randomString.Length > 8)
            {
                var cube = Instantiate(spawn, spanPosition + transform.TransformPoint(0, 0, 0), gameObject.transform.rotation);
                cube.name = string.Format("cube{0}", i);
                var textMesh = cube.GetComponentInChildren<TextMesh>();
                textMesh.transform.position = cube.transform.position + transform.TransformPoint(0, 1, 0);
                textMesh.text = randomString;
            }
            else
            {
                i--;
            }
        }
        yield return new WaitForSeconds(spanWait);
    }
}