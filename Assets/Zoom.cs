using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Zoom : MonoBehaviour
{
    [SerializeField] float m_zoomSpeed = 0f;
    [SerializeField] float m_zoomMax= 0f;
    [SerializeField] float m_zoomMin= 0f;
    [SerializeField] float m_rotateSpeed = 0f;
    [SerializeField] float x = 0f;
    [SerializeField] float y = 0f;
    [SerializeField] float z = 0f;
    [SerializeField] float upMax = 20.0f; //좌로 이동가능한 (x)최대값
    [SerializeField] float downMax = 7.0f; //우로 이동가능한 (x)최대값
    float currentPosition; //현재 위치(x) 저장
    float direction = 3.0f; //이동속도+방향

    void CameraZoom()
    {

        float t_zoomDirection = Input.GetAxis("Mouse ScrollWheel");

        //if(transform.position.y <= m_zoomMax & t_zoomDirection > 0)
            //return;

        //if(transform.position.y >= m_zoomMin & t_zoomDirection < 0)
            //return;


        transform.position += transform.forward * t_zoomDirection * m_zoomSpeed;
    }

    void CameraMove()
    {
        if (Input.GetMouseButton(0))
        {
            float t_posX = Input.GetAxis("Mouse X");
            float t_posZ = Input.GetAxis("Mouse Y");
            transform.position += new Vector3(t_posX, 0, t_posZ);
        }
    }

    private void CameraRotate()
    {
        if (Input.GetMouseButton(1))
        {
            Vector3 rot = transform.rotation.eulerAngles; // 현재 카메라의 각도를 Vector3로 반환
            rot.y += Input.GetAxis("Mouse X") * m_rotateSpeed; // 마우스 X 위치 * 회전 스피드
            rot.x += -1 * Input.GetAxis("Mouse Y") * m_rotateSpeed; // 마우스 Y 위치 * 회전 스피드
            Quaternion q = Quaternion.Euler(rot); // Quaternion으로 변환
            q.z = 0;
            transform.rotation = Quaternion.Slerp(transform.rotation, q, 2f); // 자연스럽게 회전
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        currentPosition = transform.position.x;
    }

    // Update is called once per frame
    void Update()
    {
        //CameraZoom();
        //CameraMove();
        //CameraRotate();
        
        //y += Time.deltaTime * m_rotateSpeed;
        //z += Time.deltaTime * m_rotateSpeed;
        //Debug.Log("x : " + x);
        //Debug.Log("y : " + y);
        //Debug.Log("z : " + z);

        //x += Time.deltaTime * m_rotateSpeed;

        currentPosition += Time.deltaTime * direction;
        if (currentPosition >= upMax)
        {

            direction *= -1;
            currentPosition = upMax;
        }

        //현재 위치(x)가 우로 이동가능한 (x)최대값보다 크거나 같다면
        //이동속도+방향에 -1을 곱해 반전을 해주고 현재위치를 우로 이동가능한 (x)최대값으로 설정
        else if (currentPosition <= downMax)
        {
            direction *= -1;
            currentPosition = downMax;
        }

        //현재 위치(x)가 좌로 이동가능한 (x)최대값보다 크거나 같다면
        //이동속도+방향에 -1을 곱해 반전을 해주고 현재위치를 좌로 이동가능한 (x)최대값으로 설정
        //transform.position = new Vector3(currentPosition, 0, 0);

        //"Stone"의 위치를 계산된 현재위치로 처리
        transform.rotation = Quaternion.Euler(0, currentPosition, 0);
        //transform.Rotate(new Vector3(0, m_rotateSpeed * Time.deltaTime, 0));
    }
}
