using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destapacaños : MonoBehaviour
{

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
            }

        if (gameObject.tag.Equals("P2"))
            if (Input.GetKeyDown(KeyCode.U))
            {
                rb.AddForce(new Vector2(0, push));
                counter02++;
            }
    }
}
