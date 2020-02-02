using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class JsonSchema : MonoBehaviour{
        public string data="";
    
    // Start is called before the first frame update
    void Start(){
        //Creacion de estructura
        UploadData();
    }

    void UploadData(){

        List<Players> altaPlayers = new List<Players>();
        PlayersList playerList = new PlayersList();
        Players players =  new Players();
        Players players2 =  new Players();
        Players players3 =  new Players();
        Players players4 =  new Players();



        //Se inicializa el jugador
        players.name = "Player1";
        players.powerUps = InitPowers();
        altaPlayers.Add(players);

        players2.name = "PLayer2";
        players2.powerUps = InitPowers();
        altaPlayers.Add(players2);

        players3.name = "PLayer3";
        players3.powerUps = InitPowers();
        altaPlayers.Add(players3);

        players4.name = "PLayer4";
        players4.powerUps = InitPowers();
        altaPlayers.Add(players4);

        playerList.players = altaPlayers;
        data = JsonUtility.ToJson(playerList);
        File.WriteAllText(Application.dataPath+"/Jordan/DataBase/DatabaseCGJJ.json", data);
    }

    List<PowerUps> InitPowers(){
        List<PowerUps> UploadPower = new List<PowerUps>();
        PowerUps powerUps = new PowerUps();
        powerUps.bombs = 0;
        powerUps.freeze = 0;
        powerUps.shield = 0;
        powerUps.tables = 5;
        powerUps.doubleTable = 0;
        UploadPower.Add(powerUps);
        return UploadPower;
    }
}

[System.Serializable]
 public class Players{
     public string name;
     public bool active = false;
     public List<PowerUps> powerUps;
 }

 [System.Serializable]
 public class PlayersList{
     public List<Players> players;
 }

[System.Serializable]
 public class PowerUps{
    public int doubleTable;
    public int freeze;
    public int shield;
    public int bombs;
    public int tables;
 }