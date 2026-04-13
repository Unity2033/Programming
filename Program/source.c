#include <stdio.h>
#include <windows.h>

#define SIZE 10

int main()
{
#pragma region 포인터 배열

	const char * dialogue[SIZE] = { NULL, };

	dialogue[0] = "안녕하세요?";
	dialogue[1] = "누구세요?";
	dialogue[2] = "탐정입니다.";
	dialogue[3] = "반갑습니다. 몰라 뵈어 죄송합니다.";
	dialogue[4] = "수상한 사건이 있다고 해서 찾아왔습니다.";
	dialogue[5] = "네~ 그 부분 때문에 의뢰를 드렸습니다.";
	dialogue[6] = "이 사건에 대해 아시는 게 있나요?";
	dialogue[7] = "조금은 알고 있습니다.";
	dialogue[8] = "말씀해주세요.";
	dialogue[9] = "..................";

	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태

	while (1)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{						   
			printf("hello\n");
		}
	}


#pragma endregion



	return 0;
}