using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScreenOrganize : MonoBehaviour
{
    public int NumberOfPlayers;
    public Canvas [] ScreensForPlayers;
    // Start is called before the first frame update
    void Start(){

        //dependiendo del numero de jugadores se activara el 
        //canvas necesario para poder mostrar la UI
        switch (NumberOfPlayers){
            case 2:
                ScreensForPlayers[0].enabled = true;
                break;

            case 3:
                ScreensForPlayers[1].enabled = true;
                break;
            
            case 4:
                ScreensForPlayers[2].enabled = true;
                break;
        }
    }

    // Update is called once per frame
    void Update(){
    }
}
