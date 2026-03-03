using Photon.Pun;
using Photon.Pun.UtilityScripts;
using UnityEngine;
using UnityEngine.UI;

public class DialogManager : MonoBehaviourPunCallbacks
{
    [SerializeField] InputField inputField;
    [SerializeField] ScrollRect scrollRect;
    [SerializeField] Transform parentTransform; 

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Return))
        {
            inputField.ActivateInputField();

            if(inputField.text.Length <= 0)
            {
                return;
            }

            string talk = PhotonNetwork.LocalPlayer.NickName + " : " + inputField.text;

            GameObject chat = Instantiate(Resources.Load<GameObject>("Talk"));

            chat.GetComponent<Text>().text = talk;

            chat.transform.SetParent(parentTransform);

            inputField.text = "";

            inputField.ActivateInputField();
        }
    }
}
