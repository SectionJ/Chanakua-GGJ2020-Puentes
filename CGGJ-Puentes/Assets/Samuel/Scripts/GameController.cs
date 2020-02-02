using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    private bool inGame;

    public GameObject player1;
    public GameObject player2;

    private Destapacaños p1;
    private Destapacaños p2;

    private int meta;

    // Start is called before the first frame update
    void Start()
    {
        inGame = true;
        meta = (int)Random.Range(24, 40);
        Debug.Log(meta);
        p1 = player1.GetComponent<Destapacaños>();
        p2 = player2.GetComponent<Destapacaños>();
    }

    // Update is called once per frame
    void Update()
    {
        if(p1.counter01 >= meta && inGame)
        {
            inGame = false;
            Debug.Log("Jugador 1 Gana");
        }
        if(p2.counter02 >= meta && inGame)
        {
            inGame = false;
            Debug.Log("Jugador 2 Gana");
        }
    }
}
