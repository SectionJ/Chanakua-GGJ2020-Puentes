using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RotatioWrench : MonoBehaviour{
    // Start is called before the first frame update
    int players = 2;
    void Start(){
         
    }

    // Update is called once per frame
    void Update(){
        //Controles Jugador 1
        if(Input.GetKeyUp(KeyCode.Q) /*Meter conexion con el AirController*/){
            SliderMiniGame("Player1");
        }

        //Controles jugador 2
        if(Input.GetKeyUp(KeyCode.U) /*Meter conexion con el AirController*/){
            SliderMiniGame("Player2");
        }
    }

    void SliderMiniGame(string player){
        GameObject wrench = GameObject.FindGameObjectWithTag(player);
        wrench.transform.Rotate(Vector3.forward * 900 * Time.deltaTime);
        //Debug.Log("Screen Controller/UI Players "+players+"/Slider "+player);
        Slider slider = GameObject.Find("Screen Controller/UI Players "+players+"/Slider "+player).GetComponent<Slider>();
        slider.value += 1;
    }

}
