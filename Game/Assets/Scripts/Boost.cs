using UnityEngine;

public class Boost : MonoBehaviour
{
    [SerializeField] bool state;
    [SerializeField] float force;
    [SerializeField] Rigidbody rigidBody;

    private void Awake()
    {
        rigidBody = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            state = true;
        }
    }

    private void FixedUpdate()
    {
        if(state)
        {
            rigidBody.linearVelocity = new Vector3(rigidBody.linearVelocity.x, 0, rigidBody.linearVelocity.z);

            rigidBody.AddForce(Vector3.up * force, ForceMode.Impulse);

            state = false;
        }
    }
}
