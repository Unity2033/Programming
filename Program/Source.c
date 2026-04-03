#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당
	// 프로그램을 실행하는 중에 필요한 만큼 메모리를
	// 할당하는 작업입니다.

#pragma region memory allocation 
	// 프로그램이 실행되는 동안 힙 영역에 메모리를 요청하고,
	// 해당하는 메모리의 시작 주소를 반환하는 함수입니다.

	// int * pointer = (int *)malloc(sizeof(int));
	// 
	// *pointer = 100;
	// 
	// printf("pointer 변수가 가리키는 값 : %d\n", *pointer);
	// 
	// free(pointer);
	// 
	// printf("pointer 변수가 가리키는 값 : %d\n", *pointer);

	// 이미 해제된 메모리를 가리키는 포인터의 경우 예기치 않은
	// 동작을 유발할 수 있습니다.
#pragma endregion

#pragma region contiguous allocation 
	// 연속된 메모리 공간을 확보하고, 모든 요소의 값을 0으로 
	// 초기화한 뒤 할당된 메모리의 시작 주소를 반환하는 함수입니다.

	//	int * address = calloc(sizeof(int), 5);
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		printf("address[%d] : %d\n", i, address[i]);
	//	}
	//	
	//	free(address);

#pragma endregion

    // 동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경시킬 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 지정합니다.
#pragma endregion


	return 0;
}