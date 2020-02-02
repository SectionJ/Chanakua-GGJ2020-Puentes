using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
[RequireComponent(typeof(BoxCollider2D))]

public class Dynamics : MonoBehaviour{
    // Start is called before the first frame update
    public bool player1;
    public float speed;
    string tagObjective;
    public GameObject insta;
    public GameObject table;
    void Start(){
        GetComponent<Rigidbody2D>().gravityScale = 0;
    }

    // Update is called once per frame
    void Update(){
        if(player1)
            tagObjective = "Player1";
        
        else
            tagObjective = "Player2";

        Rigidbody2D rb2d =GameObject.FindWithTag(gameObject.tag).GetComponent<Rigidbody2D>();
        /*Player 1*/
        if(player1){
           MovemntF(rb2d);
           if(Input.GetKeyUp(KeyCode.E)){
               BuildABrige();
           }
        }

        /*Player 2*/
        else{
            MovemntS(rb2d);
            if(Input.GetKeyUp(KeyCode.O)){

           }
        }
    }

    void BuildABrige(){
         Instantiate(table, insta.transform.position, Quaternion.identity);
    }

    void MovemntF(Rigidbody2D rb2d){
        if(Input.GetKeyDown(KeyCode.W)){
                rb2d.velocity = new Vector2(rb2d.velocity.x,speed);
            }
            else if(Input.GetKeyDown(KeyCode.S)){
                rb2d.velocity = new Vector2(rb2d.velocity.x,-speed);
            }
            else if(Input.GetKeyDown(KeyCode.A)){
                rb2d.velocity = new Vector2(-speed,rb2d.velocity.y);
            }
            else if(Input.GetKeyDown(KeyCode.D)){
                rb2d.velocity = new Vector2(speed,rb2d.velocity.y);
            }
            else if(Input.GetKeyUp(KeyCode.D) || Input.GetKeyUp(KeyCode.W) || Input.GetKeyUp(KeyCode.A) || Input.GetKeyUp(KeyCode.S)){
                rb2d.velocity = Vector2.zero;
            }
    }
    void MovemntS(Rigidbody2D rb2d){
            if(Input.GetKeyDown(KeyCode.I)){
                rb2d.velocity = new Vector2(rb2d.velocity.x,speed);
            }
            else if(Input.GetKeyDown(KeyCode.K)){
                rb2d.velocity = new Vector2(rb2d.velocity.x,-speed);
            }
            else if(Input.GetKeyDown(KeyCode.J)){
                rb2d.velocity = new Vector2(-speed,rb2d.velocity.y);
            }
            else if(Input.GetKeyDown(KeyCode.L)){
                rb2d.velocity = new Vector2(speed,rb2d.velocity.y);
            }
            else if(Input.GetKeyUp(KeyCode.I) || Input.GetKeyUp(KeyCode.K) || Input.GetKeyUp(KeyCode.J) || Input.GetKeyUp(KeyCode.L)){
                rb2d.velocity = Vector2.zero;
            }
    }
}
