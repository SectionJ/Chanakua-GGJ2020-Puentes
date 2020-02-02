using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SelectorController : MonoBehaviour{

    public GameObject fadeing;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine("FadeCustom");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CaracterSelection(){
        fadeing.SetActive(true);
        fadeing.GetComponent<Animator>().SetTrigger("FadeOut");
        StartCoroutine("Fadde");
    }
    
    IEnumerator FadeCustom(){
        yield return new WaitForSeconds(1);
        fadeing.SetActive(false);
    }

    IEnumerator Fadde(){
        yield return new WaitForSeconds(2);
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Island");

        // Wait until the asynchronous scene fully loads
        while (!asyncLoad.isDone){
            yield return null;
        }
    }
}
