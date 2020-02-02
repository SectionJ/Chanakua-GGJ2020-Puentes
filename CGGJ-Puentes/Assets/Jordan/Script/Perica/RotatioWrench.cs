using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class RotatioWrench : MonoBehaviour{
    // Start is called before the first frame update
    int players = 2;
    int cont = 0;
    public int speed;
    bool stop = false;
    public TextMesh [] Players;
    void Start(){
         
    }

    // Update is called once per frame
    void Update(){

        if(!stop){
            //Controles Jugador 1
            if(Input.GetKeyUp(KeyCode.Q) /*Meter conexion con el AirController*/){
                SliderMiniGame("Player1");
            }

            //Controles jugador 2
            if(Input.GetKeyUp(KeyCode.U) /*Meter conexion con el AirController*/){
                SliderMiniGame("Player2");
            }
        }

       
    }

    void SliderMiniGame(string player){
        GameObject wrench = GameObject.FindGameObjectWithTag(player);
        wrench.transform.Rotate(Vector3.forward * speed);
        //Debug.Log("Screen Controller/UI Players "+players+"/Slider "+player);
        Slider slider = GameObject.Find("Screen Controller/UI Players "+players+"/Slider "+player).GetComponent<Slider>();
        slider.value += 1;
        if(slider.value == 24){
            stop = true;
            Debug.Log("Screen Controller/UI Players "+players+"/"+player);
            TextMeshProUGUI winText = GameObject.Find("Screen Controller/UI Players "+players+"/"+player).GetComponent<TextMeshProUGUI>();
            winText.text = "Win";
        }
    }
}
