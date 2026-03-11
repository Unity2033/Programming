using Photon.Pun;
using UnityEngine;

public class Boost : MonoBehaviourPunCallbacks
{
    [SerializeField] bool state;
    [SerializeField] float force;
    [SerializeField] float distance = 0.2f;

    [SerializeField] Animator animator;
    [SerializeField] Rigidbody rigidBody;

    private void Awake()
    {
        animator = GetComponent<Animator>();
        rigidBody = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if(IsGrounded() && state == false)
        {
            animator.SetBool("Jump", false);
        }

        if (photonView.IsMine)
        {
            if (Input.GetKeyDown(KeyCode.Space) && IsGrounded())
            {
                state = true;

                animator.SetBool("Jump", true);
            }
        }
    }

    private void FixedUpdate()
    {
        if (photonView.IsMine)
        {
            if (state)
            {
                rigidBody.linearVelocity = new Vector3(rigidBody.linearVelocity.x, 0, rigidBody.linearVelocity.z);

                rigidBody.AddForce(Vector3.up * force, ForceMode.Impulse);

                state = false;
            }
        }
    }

    bool IsGrounded()
    {
        return Physics.Raycast(rigidBody.position + Vector3.up * 0.1f, Vector3.down, distance);
    }
}
