#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BUFFER_SIZE 10000


void LoadFile(const char* fileName) 
{ 
	FILE* file = fopen(fileName, "r"); 

	if (file == NULL) 
	{
		printf("파일을 열 수 없습니다: %s\n", fileName);
		return;
	}

	char buffer[BUFFER_SIZE] = { 0 };

	fread(buffer, 1, BUFFER_SIZE - 1, file);
	printf("%s", buffer);

	fclose(file);
}

int main()
{
#pragma region 파일 쓰기
	//

	//// data. txt 파일을 생성하고 w (쓰기) 모드로 설정합니다.
	//FILE * file = fopen("data.txt", "w");

	//fputs("level 10", file);

	//// 파일을 닫아줍니다.
	//fclose(file);

#pragma endregion

#pragma region 파일 이어쓰기
	//

	////data. txt 파일을 생성하고 a (이어쓰기) 모드로 설정합니다.
	//FILE * file = fopen("data.txt", "a");

	//fputs("\nHP 100", file);

	////파일을 닫아줍니다.

	//fclose(file);

#pragma endregion

#pragma region 파일 읽기
	LoadFile("Image/White Night.txt");
#pragma endregion

	return 0;

}