using UnityEngine;
using Photon.Pun;

public class NetworkManager : MonoBehaviourPunCallbacks
{
    void Start()
    {
        Create();
    }

    public void Create()
    {
        PhotonNetwork.Instantiate("Character", Vector3.zero, Quaternion.identity);
    }
  
}
