#include <iostream>
using namespace std;

class Object
{
private:
	int width;
	int height;

public:
	Object(int width, int height)
	{
		// this �����ʹ� �ڱ� �ڽ��� ����Ű�� �������Դϴ�.
		this->width = width;
		this->height = height;
	}

	Object(Object& object) // ���� ������
	{
		cout << "Copy Constuator" << endl;
	}

	void Address()
	{
		cout << this << endl;
	}


	Object This()
	{
		return *this;
	}
};




int main()
{
#pragma region ���� ������
	// ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ�
	// �������Դϴ�.

	/*Object object1(10, 20);

	object1.Address();

	Object object2 = object1;

	object2.Address();*/

	// ���� �����ڸ� �������� �ʰ� ��ü�� �����ϰ� �Ǹ�
	// �⺻ ���� �����ڰ� ȣ��Ǳ� ������ ���� ����� ��ü��
	// ����˴ϴ�.
#pragma endregion

#pragma region ���� ����
	// ��ü�� ������ �� �ּ� ���� �����Ͽ� ����
	// �޸𸮸� ����Ű�� �����Դϴ�.

	//int * ptr1 = new int;
	//
	//int* ptr2 = ptr1;

	//cout << "ptr1�� �� : " << ptr1 << endl;
	//cout << "ptr2�� �� : " << ptr2 << endl;

	//// ���� ������ ��� ���� ��ü�� ���� ���� �޸� ������
	//// �����ϰ� �ֱ� ������ �ϳ��� ��ü�� ���� �����ϰ� �Ǹ�
	//// ���� ������ ��ü�� �԰� ������ �ް� �˴ϴ�.


	//*ptr1 = 999;
	//cout << "ptr1�� ����Ű�� �� : " << *ptr1 << endl;
	//cout << "ptr1�� ����Ű�� �� : " << *ptr2 << endl;

	//delete ptr1;
	//delete ptr2;

	// ���� ����� ��ü�� �޸𸮿��� ��ü�� �� �������� ���� ������
	// �ݴ�� �Ҹ��ڰ� ȣ��Ǳ� ������ ������ ��ü�� ���� �����ǹǷ�,
	// ���� �ִ� ��ü�� ������ �� �̹� ������ �޸𸮿� �����ϰ� �˴ϴ�.

#pragma endregion

#pragma region ���� ����

	// ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ�
	// ��ü�� ���� �����Ͽ� ���� �ٸ� �޸𸮸�
	// �����ϴ� �����Դϴ�.

	/*int * ptr1 = new int;
	int * ptr2 = new int;

	*ptr1 = 999;
	*ptr2 = 999;*/

#pragma endregion

	return 0;
}