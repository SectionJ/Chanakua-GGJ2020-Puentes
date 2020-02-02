using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Controller : MonoBehaviour{
    // Start is called before the first frame update
    public Animator m_Animator;
    void Start(){
        StartCoroutine("RunTime");
    }

    // Update is called once per frame
    void Update(){
        
    }

    IEnumerator RunTime(){
        yield return new WaitForSeconds(20);
        m_Animator.SetTrigger("FadeOut");
        yield return new WaitForSeconds(2);
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Perica");

        // Wait until the asynchronous scene fully loads
        while (!asyncLoad.isDone){
            yield return null;
        }
    }

}
