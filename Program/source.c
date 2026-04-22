#include <stdio.h>
#include <conio.h>
#include <windows.h>

int index = 0;
HANDLE screen[2];

int size = sizeof(screen) / sizeof(screen[0]);

void initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	cursor.bVisible = FALSE;

	for (int i = 0; i < size; i++)
	{
		// 화면 버퍼를 2개 생성합니다.
		screen[i] = CreateConsoleScreenBuffer
		(
			GENERIC_READ | GENERIC_WRITE,
			0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
		);

		SetConsoleCursorInfo(screen[i], &cursor);
	}
}

void flip()
{
	SetConsoleActiveScreenBuffer(screen[index]);

	index = !index;
}

void clear()
{
	COORD position = { 0, 0 };

	DWORD dword;

	CONSOLE_SCREEN_BUFFER_INFO buffer;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	
	GetConsoleScreenBufferInfo(console, &buffer);

	int width = buffer.srWindow.Right - buffer.srWindow.Left + 1;
	int height = buffer.srWindow.Bottom - buffer.srWindow.Top + 1;

	FillConsoleOutputCharacter(screen[index],' ', width * height, position, &dword);
}

void release()
{
	for (int i = 0; i < size; i++)
	{
		CloseHandle(screen[i]);
	}
}

void render(int x, int y, const char * character)
{
	DWORD dword;
	COORD position = { x, y };

	SetConsoleCursorPosition(screen[index], position);
	WriteFile(screen[index], character, strlen(character), &dword, NULL);
}

int main()
{
	initialize();

	int x = 0;

	while (1)
	{
		flip();

		clear();

		render(x++, 5, "☆");
	}

	release();

	return 0;
}