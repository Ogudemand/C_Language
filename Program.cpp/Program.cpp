#include <iostream>
#include <list>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a; // b가 0이 됐을 때의 a가 최대공약수
}

int main()
{
#pragma region 반복자

    //std::list<int> list;

    //list.push_back(10);
    //list.push_back(20);
    //list.push_back(30);
    //list.push_back(40);
    //list.push_back(50);
    //list.push_front(60);
    //list.push_front(70);
    //list.push_front(80);

    //std::list<int>::iterator iterator;

    //iterator = list.begin();

    //iterator = list.begin(), 100;

    //list.erase(list.begin());

    //list.insert(++iterator, 100);

    //for (std::list<int>::iterator iterator = list.begin(); iterator != list.end(); iterator++)
    //{
    //    cout << "list의 값 : " << *iterator << endl;
    //}




#pragma endregion

#pragma region String

 /*   std::string content;

    content = "Hello World~";

    cout << content << endl;

    content.append(" Continue");

    cout << content << endl;*/

#pragma endregion

#pragma region 최대 공약수

    int firstValue = 0;
    int secondValue = 0;

    cout << "Enter the first number: ";
    cin >> firstValue;
    cout << "Enter the second number: ";
    cin >> secondValue;

    cout << "The Greatest Common Divisor is: " << gcd(firstValue, secondValue) << endl;

#pragma endregion


    return 0;
}


