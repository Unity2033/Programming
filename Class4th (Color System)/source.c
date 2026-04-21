#include <stdio.h>
#include <windows.h>

enum State
{
	IDLE = 99,
	ATTACK,
	DIE

	// 열거형은 값을 따로 설정할 수 있으며, 설정된 다음 값은 
	// 그 전의 값에서 하나 증가된 값으로 설정됩니다.
};

enum Color
{
	BLACK,
	DARKBULE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVIOLET,
	DARKYELLOW,
	GRAY,
	DRAKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};

void convert(enum State state)
{
	switch (state)
	{
	case 0:  printf("Idle\n");
		break;
	case 1:  printf("Attack\n");
		break;
	case 2:  printf("Die\n");
		break;
	default: printf("Exception\n");
		break;
	}
}

int main()
{
#pragma region 열거형
	// 관련된 상수의 값을 이름으로 정의한 집합의 자료형입니다.

	// enum State state = IDLE;
	// 
	// printf("please enter a status : ");
	// 
	// scanf_s("%d", &state);
	// 
	// printf("\n");
	// 
	// convert(state);

#pragma endregion

	int size = WHITE;

	for (int i = 0; i <= size; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

		if (i != 0 && i % 3 == 0)
		{
			system("pause");
		}

		printf("color index : %d\n", i);
	}

	return 0;
}