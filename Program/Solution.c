#include <stdio.h>
#include <math.h>

struct Player
{

	// 구조체 크기의 경우 맴버 변수의 순서에 따라 메모리의 크기가 다르게
	// 설정될 수 있습니다.


	char blood;		// 1 byte
	int health;		// 4 byte
	float attack;	// 4 byte
	double defense; //8 byte

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.
};



struct Character
{
	int x;
	int y;

};
struct Enemy
{
	int x;
	int y;

};

 double calculateDistance(struct Character a , struct Enemy b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	//struct Player player = { 'B', 75, 5.5f };

	///*player .attack = 10.5f;
	//player .blood = 'O';
	//player .health = 100;*/

	//printf("player.attack의 값 : %f \n", player.attack);
	//printf("player.blood의 값 : %c \n", player.blood);
	//printf("player.health의 값 : %d\n", player.health);


#pragma region 바이트 패딩
	//맴버 변수를 메모리에서 CPUfh dlfrdmf EO gksqjsdp dlfrdmf tn
	// 있도록, 컴파일러가 레지스터의 블록에 맞추어 바이트를
	// 패딩해주는 최적화 작업입니다.

	//printf("Player 구조체의 크기 : %d\n", sizeof(struct Player));

	// 구조체의 크기는 구조체를 구성하는 맴버 중에서 크기가 가장 큰
	// 자료형의 배수가 되도록 정렬합니다.

#pragma endregion

#pragma endregion



#pragma region 두 점 사이의 거리

	printf("Root 25 : %lf\n", sqrt(25));
	printf("pow 2에 3승 : %lf\n", pow(2, 3));

	struct Character myCharacter = { 10, 10 };
	struct Enemy myEnemy = { 15, 15 };

	/*double distance = calculateDistance(char1, char2);*/

	double distance = calculateDistance(myCharacter, myEnemy);

	if (distance <= 5.0) {
		printf("적이 공격 범위 내에 있습니다.\n");
	}
	else {
		printf("적이 공격 범위 밖에 있습니다.\n");
	}

#pragma endregion
}


