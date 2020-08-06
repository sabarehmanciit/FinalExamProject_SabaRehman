using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class Spawner : MonoBehaviour
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
        const int maxCount = 83;
        var count = 0;
        int cubeCount = 0;
        for (var i = 0; i < maxCount; i++)
        {
            var randomString = "";

            var characters = new string[] { "(", "x", "s", "3", ")" };
            var stringLength = Random.Range(9, 15);



            for (var j = 0; j < stringLength; j++)
            {
                randomString += characters[Random.Range(0, characters.Length)];
            }

            if (randomString.IndexOf("(", StringComparison.Ordinal) == -1)
            {
                i--;
                continue;
            }

            if (AreParenthesisBalanced(randomString))
                count++;

            if (count < maxCount / 3 && i > maxCount / 3 * 2)
            {
                i--;
                if (!AreParenthesisBalanced(randomString))
                    continue;
            }

            if (count == maxCount / 3 && i < maxCount - 1 && AreParenthesisBalanced(randomString))
            {
                count--;
                continue;
            }


            var spanPosition = new Vector3(Random.Range(-80f, 80f), Random.Range(5f, 15f), Random.Range(-80f, 80f));

            var cube = Instantiate(spawn, spanPosition + transform.TransformPoint(0, 1, 0), gameObject.transform.rotation);
            cube.name = string.Format("cube{0}", i);
            var textMesh = cube.GetComponentInChildren<TextMesh>();
            textMesh.transform.position = cube.transform.position + transform.TransformPoint(0, 1, 0);
            textMesh.text = randomString;
            cubeCount++;
            Console.Write($"{i} {textMesh.text}");

            if (i == maxCount - 1 && cubeCount < maxCount)
                i--;
        }

        yield return new WaitForSeconds(spanWait);
    }

    private static bool IsMatchingPair(char character1, char character2)
    {
        return character1 == '(' && character2 == ')';
    }

    private bool AreParenthesisBalanced(IEnumerable<char> exp)
    {
        var stack = new Stack<char>();

        foreach (var c in exp)
        {
            switch (c)
            {
                case '(':
                    stack.Push(c);
                    break;
                case ')' when stack.Count == 0:
                case ')' when !IsMatchingPair(stack.Pop(), c):
                    return false;
            }
        }

        return stack.Count == 0;
    }
}