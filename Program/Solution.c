#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>



#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

#define WIDTH 11
#define HEIGHT 11



char maze[WIDTH][HEIGHT];

typedef struct Player 
{
	int x;
	int y;
	const char* shape;
} Player;




void CreateMaze()
{
	// 0 : 빈 공간 (" ")
	// 1 : 벽 (ㅁ)
	// 2 : 탈출구 (0)

	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1100011101");
	strcpy(maze[2], "1110111001");
	strcpy(maze[3], "1110011011");
	strcpy(maze[4], "1111010011");
	strcpy(maze[5], "1100000111");
	strcpy(maze[6], "1101101111");
	strcpy(maze[7], "1100000111");
	strcpy(maze[8], "1110011111");
	strcpy(maze[9], "1111011111");
	strcpy(maze[10],"1111111111");

}

void gotoxy(int x, int y) 
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}




void Render(char map[WIDTH][HEIGHT], Player* player)
{
	system("cls");
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (j == player->x && i == player->y) 
			{
				printf("%s", player->shape); 
			}
			else {
				printf("%c", map[i][j] == '1' ? '#' : ' '); 
			}
		}
		printf("\n");
	}
}

	


void Keyboard(Player* player)
{
	if (_kbhit())
	{
		char key = _getch();

		if (key == -32 || key == 0) 
		{
			key = _getch();
		}

		int newX = player->x, newY = player->y;

		switch (key)
		{
		case UP: newY--; break;
		case DOWN: newY++; break;
		case LEFT: newX--; break;
		case RIGHT: newX++; break;
		}

		if (maze[newY][newX] == '0')
		{
			player->x = newX;
			player->y = newY;
		}
	}
}

int main() 
{
	Player player = { 4, 1, "P" };

	CreateMaze();

	while (1)
	{
		Render(maze, &player); 
		Keyboard(&player);
		Sleep(100);
	}

	return 0;
}




//int main()
//{
//	Student student;
//
//	student.name;
//
//	// 첫 번쨰 매개변수
//	// 복사받을 문자 배열을 넣어줍니다.
//
//	// 두 번째 매개변수
//	// 복사시킬 문자열을 넣어줍니다.
//	strcpy(student.name, "KTM");
//
//	printf("student.name의 값 : %s\n", student.name);
//
//	strcpy(student.name, "G");
//
//	printf("student.name의 값 : %s\n", student.name);
//
//	return 0;
//}

	




