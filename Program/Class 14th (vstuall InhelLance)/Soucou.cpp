#include <iostream>

using namespace std;

class Food
{
public:
	Food()
	{
		cout << "Create Food" << endl;
	}

	~Food()
	{
		cout << "Release Food" << endl;
	}


};

class Meat : public virtual Food
{
public:
	Meat()
	{
		cout << "Create Meat" << endl;
	}

	~Meat()
	{
		cout << "Release Meat" << endl;
	}
};

class Vegetable : public virtual Meat
{
public:
	Vegetable()
	{
		cout << "Create Vegetable" << endl;
	}

	~Vegetable()
	{
		cout << "Release Vegetable" << endl;
	}


};

class Soup : public virtual Vegetable
{
public:
	Soup()
	{
		cout << "Create Soup" << endl;
	}

	~Soup()
	{
		cout << "Release Soup" << endl;
	}


};




int main()
{
#pragma region 가상 상속

	//Soup soup;


#pragma endregion

#pragma region 등차수열

	//int firstTerm = 0;
	//int commonDifferent = 0;

	//int n = 0;

	//cin >> firstTerm;

	//cout << endl;

	//cin >> commonDifferent;

	//cout << endl;

	//cout << "n의 값 입력 : ";

	//cin >> n;

	//for (int i = 0; i < n; i++)
	//{
	//	cout << firstTerm + commonDifferent * i << " ";
	//}


#pragma endregion



	return 0;
}




