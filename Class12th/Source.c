#include <stdio.h>
#include <math.h>

struct Player
{

	// ����ü ũ���� ��� �ɹ� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ���
	// ������ �� �ֽ��ϴ�.


	char blood;		// 1 byte
	int health;		// 4 byte
	float attack;	// 4 byte
	double defense; //8 byte

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �� �����ϴ�.
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

double calculateDistance(struct Character a, struct Enemy b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


struct Node
{
	int data;
	struct Node* next;

};




int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	//struct Player player = { 'B', 75, 5.5f };

	///*player .attack = 10.5f;
	//player .blood = 'O';
	//player .health = 100;*/

	//printf("player.attack�� �� : %f \n", player.attack);
	//printf("player.blood�� �� : %c \n", player.blood);
	//printf("player.health�� �� : %d\n", player.health);


#pragma region ����Ʈ �е�
	//�ɹ� ������ �޸𸮿��� CPUfh dlfrdmf EO gksqjsdp dlfrdmf tn
	// �ֵ���, �����Ϸ��� ���������� ���Ͽ� ���߾� ����Ʈ��
	// �е����ִ� ����ȭ �۾��Դϴ�.

	//printf("Player ����ü�� ũ�� : %d\n", sizeof(struct Player));

	// ����ü�� ũ��� ����ü�� �����ϴ� �ɹ� �߿��� ũ�Ⱑ ���� ū
	// �ڷ����� ����� �ǵ��� �����մϴ�.

#pragma endregion

#pragma endregion



#pragma region �� �� ������ �Ÿ�

	/*printf("Root 25 : %lf\n", sqrt(25));
	printf("pow 2�� 3�� : %lf\n", pow(2, 3));

	struct Character myCharacter = { 0, 0 };
	struct Enemy myEnemy = { 10, 10 };

	double distance = calculateDistance(myCharacter, myEnemy);

	if (distance <= 5.0) {
		printf("���� ���� ���� ���� �ֽ��ϴ�.\n");
	}
	else {
		printf("���� ���� ���� �ۿ� �ֽ��ϴ�.\n");
	}*/

#pragma endregion


#pragma region �ڱ� ���� ����ü

	/*struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	struct Node* currentNode = NULL;

	node1.next = &node2;

	node2.next = &node3;

	node3.next = NULL;

	currentNode = &node1;

	while (currentNode != NULL)
	{
		printf("currentNode.data = %d\n", currentNode->data);
		currentNode = currentNode->next;
	}

	*/


#pragma endregion



	return 0;
}