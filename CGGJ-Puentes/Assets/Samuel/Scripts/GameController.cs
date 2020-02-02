using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class GameController : MonoBehaviour
{
    private bool inGame;

    public GameObject player1;
    public GameObject player2;

    private Destapacanos p1;
    private Destapacanos p2;

    public Animator fade;

    private int meta;

    // Start is called before the first frame update
    void Start()
    {
        inGame = true;
        meta = /*(int)Random.Range(24, 40);*/24;
        Debug.Log(meta);
        p1 = player1.GetComponent<Destapacanos>();
        p2 = player2.GetComponent<Destapacanos>();
    }

    // Update is called once per frame
    void Update()
    {
        if(p1.counter01 >= meta && inGame)
        {
            inGame = false;
            Debug.Log("Jugador 1 Gana");
            GameObject.FindWithTag("Texto P1").GetComponent<TextMeshProUGUI>().text = "Wins";
            StartCoroutine("Fadde");
            
        }
        if(p2.counter02 >= meta && inGame)
        {
            inGame = false;
            GameObject.FindWithTag("Texto P2").GetComponent<TextMeshProUGUI>().text = "Wins";
            StartCoroutine("Fadde");
        }
    }

    IEnumerator Fadde(){
        yield return new WaitForSeconds(1);
        fade.SetTrigger("FadeOut");
        yield return new WaitForSeconds(2);
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Island");

        // Wait until the asynchronous scene fully loads
        while (!asyncLoad.isDone){
            yield return null;
        }
    }
}
