define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> // Key
#include <windows.h> // Coordinate

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void GotoXY(int x, int y)
{
    // x, y ��ǥ ����
    COORD position = { (SHORT)x, (SHORT)y };

    // Ŀ�� �̵� �Լ�
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
    int x = 2;
    int y = 5;

    char key = 0;



    while (1)
    {
        if (_kbhit())
        {
            key = _getch();



            if (key == -32)
            {
                key = _getch();
            }
        }

        system("cls");

        GotoXY(x, y);
        printf(" ");

        switch (key) {
        case UP:
            if (y > 0) y--;
            break;
        case LEFT:
            if (x > 1) x -= 2;
            break;
        case RIGHT:
            x += 2;
            break;
        case DOWN:
            y++;
            break;
        }

        GotoXY(x, y);
        printf("*");

    }

    //while (1)
    //{
    //	if (_kbhit()) //Ű���� �Է� Ȯ��(true/false)
    //			{
    //		key = _getch(); // key �Է��� �޾��ִ� �Լ�
    //		
    //		if(key == -32)
    //		{
    //			key = _getch();
    //		}
    //
    //		switch (key)
    //		{
    //		case UP: printf("UP\n");
    //			break;
    //		case LEFT: printf("LEFT\n");
    //			break;
    //		case RIGHT: printf("RIGHT\n");
    //			break;
    //		case DOWN: printf("DOWN\n");
    //			break;
    //		}
    //
    //
    //
    //	}
    //
    //	}

    return 0;

}
