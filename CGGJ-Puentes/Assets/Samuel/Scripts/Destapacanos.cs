using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Destapacanos : MonoBehaviour
{
    int players = 2;
    Rigidbody2D rb;
    private float push = 350.0f;
    public int counter01;
    public int counter02;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        counter01 = counter02 = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (gameObject.tag.Equals("P1"))
            if (Input.GetKeyDown(KeyCode.Q))
            {
                rb.AddForce(new Vector2(0, push));
                counter01++;
                Slider slider = GameObject.Find("Canvas/Slider Player1").GetComponent<Slider>();
                slider.value += 1;

            }

        if (gameObject.tag.Equals("P2"))
            if (Input.GetKeyDown(KeyCode.U))
            {
                rb.AddForce(new Vector2(0, push));
                counter02++;
                Slider slider = GameObject.Find("Canvas/Slider Player2").GetComponent<Slider>();
                slider.value += 1;
            }
    }
}
