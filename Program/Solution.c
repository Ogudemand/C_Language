#include <stdio.h>

#include "Function.h" // int data;

#define SIZE 100

// ��ũ���� ��� �ڷ����� �������� �����Ƿ�
// ��ũ���� ������ ������ �ֽ��ϴ�.


int level; // ���� ���� (BSS �޸� ����)
		   // ���� ������ ���� �ʱ�ȭ���� ������ 0 �̶�� ������ �ʱ�ȭ�˴ϴ�.

int stage = 1;// ���� ���� (�ʱ�ȭ�� �̷���� �޸� ����)

int flag = 0;

void Stege()
{
	stage++;
}

void Increase()
{
	// ���� ������ �� �ѹ��� �ʱ�ȭ�� �̷�����ϴ�.
	static int score = 0;

	score++;

	printf("score ������ �� : %d\n", score);
}


int main()
{
#pragma region ��ó����
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ����
	// ���� ó���� �ϴ� �����Դϴ�


	//data = 100;

	//printf("Function.h���� ������ data ������ �� : %d\n, data");


	// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ�
	// ó���Ǵ� �����̱� ������ ��ɹ� ���� ";"�� ������� �ʽ��ϴ�.
#pragma endregion

#pragma region ������ ����

#pragma region ���� ����

	// ��� ������ ����� ������ ��� �������� ��ȿ�ϸ�,
	// ����� ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

	// { } �ٱ��� �ִ� data ����
	/*
	int data = 100;

	{

		// { } �ȿ� �ִ� data ����
		int data = 999;
		printf("{ } �ȿ� �ִ� data�� �� : %d\n", data);
	}

	printf("{ } �ٱ��� �ִ� data�� �� : %d\n", data);

	*/

	/*
	int i;

	for (int i = 0; i < 10; i++)
	{


	}

	i = 3330;
	*/

#pragma endregion

#pragma region ���� ����
	// ���α׷��� ��𿡼��� ������ �� ������, ���α׷���
	// ����Ǿ�߸� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

	/*
	printf("���� ���� stage�� �� : %d\n", stage);

	stage = 10;
	
	printf("���� ���� stage�� �� : %d\n", stage);
	*/

#pragma endregion

#pragma region ���� ����
	// ���α׷��� ����� �� �޸𸮿� �ö󰡰� �Ǹ�, ���� ������ Ư����
	// ���� ������ Ư¡�� ������ �ִ� ���� �Դϴ�.
/*
	Increase();
	Increase();
	Increase();
	Increase();
	*/

#pragma endregion



#pragma endregion

#pragma region �Ҽ�
	/*
	// 1. �Է��� �� �ִ� ������ �����մϴ�.
	int number = 0;
	int flag = 0;

	// 2. ���� �Է��մϴ�.
	scanf_s("%d", &number);


	// 3. �ݺ����� �̿��ؼ� �Ҽ��� �Ǻ��մϴ�.
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			flag++;
			break;
		}
	}

	// 4. ���� �Է��� ���� �Ҽ����� �ƴ��� �Ǻ��մϴ�.
	if (flag == 0)
	{
		printf("�Ҽ�");

	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�");
	}

	*/




#pragma endregion

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ�
	// ó���Ǵ� �����Դϴ�.

	printf("SIZE ��ũ���� �� : %d\n", SIZE);

	// ��ũ���� ������ ������ ������ ����Ǹ�, �� ��ũ�ΰ�
	// ����� �� ��ũ���� ��ü ����� �־�� �ϹǷ� ���α׷���
	// ũ�Ⱑ Ŀ���� �˴ϴ�.


#pragma endregion


	return 0;
}


