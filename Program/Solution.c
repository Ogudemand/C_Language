#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>



#define WIDTH 11
#define HEIGHT 11

char maze[WIDTH][HEIGHT];

void CreateMaze()
{
	// 0 : 빈 공간 (" ")
	// 1 : 벽 (ㅁ)
	// 2 : 탈출구 (*)

	strcpy(maze[0], "1111111111");
	strcpy(maze[1], "1100111101");
	strcpy(maze[2], "1110111001");
	strcpy(maze[3], "1110011011");
	strcpy(maze[4], "1111010011");
	strcpy(maze[5], "1100000111");
	strcpy(maze[6], "1101111111");
	strcpy(maze[7], "1100000111");
	strcpy(maze[8], "1110011111");
	strcpy(maze[9], "1111011111");
	strcpy(maze[10],"1111111111");
}

void Render()
{
		for (int y = 0; y < HEIGHT; y++) 
		{
			for (int x = 0; x < WIDTH; x++) 
			{
				char cell = maze[y][x];
				if (cell == '1') 
				{
					printf("■"); 
				}
				else if (cell == '0') 
				{
					printf(" ");
				}
			}
			printf("\n");
		}
}



typedef struct Student
{
	char name[10];
}Student;

int main()
{
		CreateMaze(); 
		Render();     

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

	




