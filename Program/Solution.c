#include <stdio.h>

void Function()
{
	printf("Function");
}

int Add(int x, int y)
{
	return x + y;
}

int Minus(int x, int y)
{
	return x - y;
}

int Multiple(int x, int y)
{
	return x * y;
}

int Divide(int x, int y)
{
	return x / y;
}

void Swap(int A, int B)
{
	int temp = NULL;
	temp = B;
	B = A;
	A = temp;

	printf("A�� �� : %d\n", A);
	printf("B�� �� : %d\n", B);

	// �Լ��� ȣ���� �� ������ ���� �μ��� �����ϰ� �Ǹ�
	// �Լ��� �Ű� ������ ������ ����� ���� ���޵Ǳ� ������
	// �μ��� ������ ���� �Լ� ������ �Ͼ ���꿡 ����'
	// ������ ���� �ʽ��ϴ�.

}




void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ�
	// ���� ���������� ����� �ڵ� �����Դϴ�.

	//Function();

	// �Լ��� ȣ��� �� �Լ��� ȣ��Ǵ� ���� �������� 
	// �Ѿ�� �˴ϴ�.

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ�
	// ���� ����ϴ� �����Դϴ�.
	/*
	printf("Add�Լ��� ��� : %d\n",Add(10, 20));
	printf("Add�Լ��� ��� : %d\n", Minus(10, 20));

	// �Ű� ������ �Լ� ���ο����� ������ �̷������, �Լ���
	// ����Ǹ� �޸𸮿��� ������� Ư¡�� ������ �ֽ��ϴ�.

	printf("Add�Լ��� ��� : %d\n", Multiple(5.75, 7.65));
	

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°� ��ġ���� ������
	// ���ϴ� ���� ���� �� �����ϴ�.

	//return(��ȯ)

	*/

#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű������� ������ ���޵Ǵ� ���Դϴ�.


	// A(10) <-> B(20)

	// A 20
	// B 10

	

	int A = 10;
	int B = 20;
	int temp = NULL;
	
	Swap(A, B);
	



	printf("A�� �� : %d\n", A);
	printf("B�� �� : %d\n", B);

	


	// �μ��� ��� �Լ��� �ִ� �Ű������� ���� ���� ������ �� �ִ�
	// �μ��� ���� �����Ǹ�, ���� �����ϴ� �μ��� ���� ���޹޴�
	// �Ű������� �ڷ����� ���� ��ġ�ؾ� �մϴ�.


#pragma endregion


#pragma endregion

}
