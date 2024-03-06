#include <iostream>
#include "Vulture.h"
#include "Goliath.h"
#include "SeigeTank.h"
#include <vector>

//class Factory {
//public:
//    Factory() {}
//    ~Factory() {
//        for (auto unit : units) {
//            delete unit;
//        }
//    }
//
//    void createUnit(int unitType) {
//        Mechanic* unit = nullptr;
//        switch (unitType) {
//        case 0:
//            unit = new Vulture();
//            std::cout << "벌쳐 완료." << std::endl;
//            break;
//        case 1:
//            unit = new SeigeTank();
//            std::cout << "시즈탱크 완료." << std::endl;
//            break;
//        case 2:
//            unit = new Goliath();
//            std::cout << "골리앗 완료." << std::endl;
//            break;
//        default:
//            std::cout << "에러" << std::endl;
//            return;
//        }
//        units.push_back(unit);
//    }
//
//private:
//    std::vector<Mechanic*> units;
//};

using namespace std;

int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같으 형태의 함수로
	// 재정의될 수 있는 함수입나다.

	//가상 함수 실행 시가에 상위 클래스에 대한 참조로
	// 하위 클래스에 재정의된 함수를 호출할 수 있습니다

	/*Mechanic* mechanic = new Vulture();

	mechanic->Move();



	cout << "Mechanic의 크기 : " << sizeof(Mechanic) << endl;*/


	// 가상 함수는 한 개 이상의 가상 함수를 포함하는 클래스가 있을떄
	// 객체 주소에 가상 함수 테이블을 추가합니다.

#pragma endregion

#pragma region Factory 


	//Factory factory;
	//int input;
	//int maxInputs = 5;

	//for (int i = 0; i < maxInputs; i++) {
	//    std::cout << "생산할 몹 입렵 (0: 벌쳐, 1: , 시즈 탱크 2: 골리앗, 기타: 그만두기): ";
	//    std::cin >> input;
	//    if (input < 0 || input > 2) break; 
	//    factory.createUnit(input);
	//}





#pragma endregion

#pragma region 가상 소멸자
	// 객체가 소멸될 떄 현재 참조하고 있는 객체와 상관없이
	// 모두 호출되는 소멸자입니다.

	//Mechanic* unit1 = new Vulture();

	//delete unit1;

	//// 상속된 객체가 해제될 때 하위 클래스의 소멸자가 먼저
	//// 실행되고 상위 클래스의 소멸자가 실행되어야 하기 때문에
	//// 실행 시간에 메모리에 할당된 객체를 확인하고 차례대로
	//// 소멸시켜야 합니다.




#pragma endregion



	return 0;
}

