#include <stdio.h>

void main()
{
#pragma region ������
	//�޸��� �ּ� ���� ������ �� �ִ� �����Դϴ�

	/*
	int data = 10;
	double pi = 3.14;

	// 8 byte
	// [NULL]
	int * ptr = NULL ;

	// * �����͸���ũ

	//������ ������ �ڽ��� �޸� ������ ������ ������
	//������ ������ ������ �ּҸ� �����ϰ� �Ǹ� �ش� ������
	//���� �ּҸ� ����Ű�� �˴ϴ�

	//32 bit (4 byte)
	//64 bit (8 byte) (ptr)

	//     ptr ����
	// [data�� �����ּ�] <---- data�� ���� �ּ�

	ptr = &data;

	// ������ �ּҴ� ���α׷��� ����� ������ ����Ǹ�,
	// �����Ͱ� �⸮Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�
	// �����Ͱ� ����Ű�� �޸��� �ڷ������� �������־�� �մϴ�.

	printf("data ������ �޸� �ּ� : %p\n", &data);
	printf("ptr ������ �� : %p\n", ptr);
	printf("ptr ������ �޸� �ּ� : %p\n", &ptr);

	printf("data ������ �� : %d\n", data);
	printf("ptr ������ ����Ű�� �� : %d\n, *ptr");

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ�����
	// ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.

	printf("pi ������ ����Ű�� �� : %f\n, pi");
	printf("ptr ������ ����Ű�� �� : %f\n, *ptr");
	*/

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ����
	// ó���� �� �ִ� ũ��� ��������, �� ���� ó����
	// �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.

#pragma endregion


#pragma region sizeof ������
	// �ǿ������� ũ�⸦ ����Ʈ ������ ��ȯ�ϴ� ������ �Դϴ�.

	/*int * pointre = NULL;

	printf("char �ڷ����� ũ�� : %d\n",		sizeof(char));
	printf("short �ڷ����� ũ�� : %d\n",		sizeof(short));
	printf("int �ڷ����� ũ�� : %d\n",		sizeof(int));
	printf("long �ڷ����� ũ�� : %d\n",		sizeof(long));
	printf("float �ڷ����� ũ�� : %d\n",		sizeof(float));
	printf("double �ڷ����� ũ�� : %d\n",		sizeof(double));
	printf("pointre �ڷ����� ũ�� : %d\n",	sizeof(pointre));*/



#pragma endregion


#pragma region ��� ���� ������
	// ������ ������ ����� �����Ͽ�, ������ ������
	// ����Ű�� �ִ� �ּҿ� �����ϴ� ���� ������ �� ������
	// ������ �� �ֽ��ϴ�.

	//const int* ptr;

	//int a = 10;

	//int b = 20;

	//ptr = &a;
	//printf("ptr�� �� : %p\n", ptr);
	//a = 45;

	//// *ptr = 100
	// 
	//ptr = &b;
	//printf("ptr�� �� : %p\n", ptr);

	// ����� ������ �����ʹ� �ش� ������ ���� ������ �� ������,
	// �ٸ� ������ �ּҴ� ����ų �� �ֽ��ϴ�




#pragma endregion

#pragma region ������ ���


	//int x = 100;
	//int y = 200;


	//int * const  cptr = &x;

	//*cptr = 999;

	//printf("x�� �� : %d\n", x);

	// cptr = &y; (ERROR)


#pragma endregion

#pragma region ���

// ���� �Է��� ������ ���

//int number = 0;
//
//scanf_s("%d", &number);
//
//for (int i = 1; i <= number; i++)
//{
//	if (number % i == 0);
//	{
//		printf("%d", i);
//	}
//
//}










#pragma endregion