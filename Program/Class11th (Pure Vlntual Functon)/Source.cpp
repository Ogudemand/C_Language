#include <iostream>
#include "../Project1/Pencil.h"
#include "../Project1/Circle.h"
#include "../Project1/Rectangle.h"


using namespace std;

int main()
{
#pragma region 순수 가상 함수
	// 상위 클래스에 있는 맴버 함수를 정의하지 않고
	// 하위 클래스에게 재정의를 반드시 할 수 있도록 해주는 함수입니다.

	//Pencil* pencil = new Circle();

	//pencil -> Draw();

	//pencil = new Rectangle();

	//pencil -> Draw();

	// 추상 클래스는 객체를 생성할 수 없습니다.

#pragma endregion


#pragma endregion


	return 0;
}
