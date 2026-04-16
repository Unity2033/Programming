#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 10000

void load(const char * file_name)
{
	FILE * file = fopen(file_name, "r");

	char buffer[SIZE] = { 0, };

	// 첫 번째 매개변수 : 읽을 데이터를 저장할 메모리 버퍼의 포인터 변수
	// 두 번째 매개변수 : 각 데이터 항목의 크기
	// 세 번째 매개변수 : 데이터를 읽어올 항목의 수
	// 네 번째 매개변수 : 데이터를 읽어올 파일의 포인터 변수

	fread(buffer, sizeof(char), SIZE, file);

	printf("%s", buffer);

	fclose(file);
}

int main()
{
#pragma region 파일 입출력

	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입출력 모드)

	FILE * file = fopen("data.txt", "w");

	fputs("Health : \n", file);
	fputs("Attack : \n", file);
	fputs("Defense : \n", file);

	fclose(file);

	load("Pokemon.txt");

#pragma endregion


	return 0;
}