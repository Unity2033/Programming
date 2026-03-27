#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.

	// int data = 10;
	// 
	// printf("data 변수의 주소 : %p\n", &data);

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리의 공간은 1 byte의 크기로 나누어 표현합니다.
#pragma endregion

#pragma region 표준 입력 함수
	// 여러 종류의 데이터를 다양한 서식에 맞추어
	// 입력해주는 함수입니다.

	// int x = 0;
	// 
	// // 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로
	// // 넘어갈 수 없습니다.
	// 
	// printf("x 변수의 값 : ");
	// 
	// scanf_s("%d", &x);
	// 
	// // 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// // 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
	// 
	// printf("x의 값 : %d\n", x);

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관
	// 하였다가 입력하는 순간 버퍼 안의 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	// int room = 10;
	// 
	// int storage = 20;
	// 
	// int * pointer = &room;
	// 
	// // 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// // 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.
	// 
	// printf("room 변수의 주소 : %p\n", &room);
	// printf("pointer 변수의 값 : %p\n", pointer);
	// printf("pointer 변수의 주소 : %p\n\n", &pointer);
	// 
	// *pointer = 99;
	// 
	// printf("room 변수의 값 : %d\n", room);
	// printf("pointer변수가 가리키는 값 : %d\n\n", *pointer);
	// 
	// pointer = &storage;
	// 
	// printf("pointer 변수의 값 : %p\n", pointer);
	// printf("pointer변수가 가리키는 값 : %d\n\n", *pointer);
	// 
	// // 포인터 변수도 자신의 메모리 공간을 가지고 있으며, 포인터 변수에
	// // 변수의 주소를 저장하게 되면 해당 변수의 시작 주소를 가리킵니다.
	// 
	// printf("pointer 변수의 크기 : %u\n", sizeof(pointer));

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로
	// 정해지며, 한 번에 처리할 수 있는 크기는 운영 체제에 따라 크기가 결정됩니다.
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	// char rank = 'S';
	// int level = 1;
	// float durability = 12.5f;
	// 
	// void * reference = NULL;
	// 
	// reference = &rank;

	// 범용 포인터는 메모리 주소에 접근해서 값을
	// 변경할 수 없습니다.

	// *(char *)reference = 'A';
	// 
	// printf("rank 변수의 값 : %c\n", rank);
	// printf("reference의 값 : %p\n", reference);
	// 
	// reference = &level;
	// 
	// *(int*)reference = 5;
	// 
	// printf("level 변수의 값 : %d\n", level);
	// printf("reference의 값 : %p\n", reference);
	// 
	// reference = &durability;
	// 
	// *(float*)reference = 17.5f;
	// 
	// printf("durability 변수의 값 : %f\n", durability);
	// printf("reference의 값 : %p\n", reference);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가
	// 가리키는 변수의 자료형으로 변환해주어야 합니다.
#pragma endregion

#pragma region 상수 지시 포인터
// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수
// 없도록 지정되어 있는 포인터입니다.

// int y = 10;
// int z = 20;
// 
// const int * address = &y;
// 
// // *address = 99;
// 
// printf("y의 주소 값 : %p\n", &y);
// printf("address의 값 : %p\n\n", address);
// 
// address = &z;
// 
// printf("z의 주소 값 : %p\n", &z);
// printf("address의 값 : %p\n", address);

#pragma endregion

#pragma region 포인터 상수
// 포인터 변수가 가리키고 있는 주소 값을 변경할 수
// 없는 포인터입니다.

// int dexterity = 5;
// int wisdom = 1;
// 
// int * const fixed = &dexterity;
// 
// *fixed = 10;
// 
// // fixed = wisdom;
// 
// printf("fixed 변수가 가리키는 값 : %d\n", *fixed);
// printf("dexterity 변수의 값 : %d\n", dexterity);

#pragma endregion
}