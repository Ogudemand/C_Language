#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define BUFFER_SIZE 10000


void LoadFile(const char* fileName) 
{ 
	FILE* file = fopen(fileName, "r"); 

	if (file == NULL) 
	{
		printf("������ �� �� �����ϴ�: %s\n", fileName);
		return;
	}

	char buffer[BUFFER_SIZE] = { 0 };

	fread(buffer, 1, BUFFER_SIZE - 1, file);
	printf("%s", buffer);

	fclose(file);
}

int main()
{
#pragma region ���� ����
	//

	//// data. txt ������ �����ϰ� w (����) ���� �����մϴ�.
	//FILE * file = fopen("data.txt", "w");

	//fputs("level 10", file);

	//// ������ �ݾ��ݴϴ�.
	//fclose(file);

#pragma endregion

#pragma region ���� �̾��
	//

	////data. txt ������ �����ϰ� a (�̾��) ���� �����մϴ�.
	//FILE * file = fopen("data.txt", "a");

	//fputs("\nHP 100", file);

	////������ �ݾ��ݴϴ�.

	//fclose(file);

#pragma endregion

#pragma region ���� �б�
	LoadFile("Image/White Night.txt");
#pragma endregion

	return 0;

}