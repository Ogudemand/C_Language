//#include <iostream>
//#include <vector>
//#include <deque>
//#include <time.h>
//#include <conio.h>
//#include <Windows.h>

using namespace std;
//
//#define UP 72
//#define LEFT 75
//#define RIGHT 77
//#define DOWN 80
//#define ARROW_COUNT 4
//


//void gotoxy(int x, int y)
//{
//    COORD pos = { x, y };
//    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleCursorPosition(output, pos);
//}
//
//void drawArrow(int arrow, int x, int y)
//{
//    gotoxy(x, y);
//    switch (arrow) {
//    case UP:
//        cout << "^";
//        break;
//    case DOWN:
//        cout << "v";
//        break;
//    case LEFT:
//        cout << "<";
//        break;
//    case RIGHT:
//        cout << ">";
//        break;
//    }
//}

int main()
{
#pragma region 선형 컨태이너
    // 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이
    // 없는 일반적인 컨테이너입니다.

#pragma region Vector

    //std::vector<int> vector;

    //vector.reserve(10);

    ////push_back : Vector 컨테이너 뒤에 데이터 값을 넣어줍니다.
    //// [10] [20] [30] [40] [50] [60]

    //vector.push_back(10);

    //cout << "vector.capacity : " << vector.capacity() << endl;

    //vector.push_back(20);


    //vector.push_back(30);


    //vector.push_back(40);


    //vector.push_back(50);
    //
    //cout << "vector.capacity : " << vector.capacity() << endl;

    //for (int i = 0; i < vector.size(); i++)
    //{
    //	cout << vector[i] << " ";
    //}

    //vector.pop_back();
    //vector.pop_back();
    //vector.pop_back();

    //cout << endl;

    //for (int i = 0 ; i < vector.size(); i++)
    //{
    //	cout << vector[1] << " ";
    //}

    //cout << endl;







#pragma endregion





#pragma region Rhthm Game

    //srand(time(NULL));

    //std::vector<const char*> note;

    //int createCount = 5;

    //// 1. Note를 생성합니다.
    //for (int i = 0; i < createCount; i++)
    //{
    //    // 2. 랜덤한 Note를 생성합니다.
    //    // 좌 상 하 우
    //    int random = rand() % 4;

    //    switch (random)
    //    {
    //    case 0: note.push_back("상");
    //            break;
    //    case 1: note.push_back("좌");
    //            break;
    //    case 2: note.push_back("우");
    //            break;
    //    case 3: note.push_back("하");
    //            break;

    //    }


    //}

    //char key = 0;

    //// 3. 게임이 시작 조건을 설정합니다.
    //while (note.empty() == false)
    //{
    //    // 4. Note를 출력합니다.
    //    for (int i = 0; i < note.size(); i++)
    //    {
    //        cout << note[i] << " ";
    //    }

    //    // 5. key 입력을 받습니다.
    //    key = _getch();

    //    if (key == -32)
    //    {
    //        key = _getch();
    //    }

    //    // 6. 내가 선택한 key가 맞다면 Note를 삭제합니다.
    //    switch (key)
    //    {
    //    case UP: if (note[note.size() - 1] == "상") { note.pop_back(); }
    //        break;
    //    case LEFT: (note[note.size() - 1] == "좌") { note.pop_back(); }
    //        break;

    //    case RIGHT: (note[note.size() - 1] == "우") { note.pop_back(); }
    //        breack;
    //    case DOWN(note[note.size() - 1] == "아래") { note.pop_back(); }
    //        breack;
    //    }

    //    // 7. 화면을 전체 지워줍니다.
    //    system("cls");


    //}



    //srand((unsigned)time(NULL));
    //vector<int> arrows = { UP, DOWN, LEFT, RIGHT };
    //vector<pair<int, int>> arrowPositions; // 화살표와 그 위치를 저장
    //int score = 0;
    //const int startX = 40, startY = 2; // 화살표 시작 위치
    //const int targetY = 20; // 사용자가 입력해야 하는 위치

    //// 빈 화살표 그리기
    //for (int i = 0; i < ARROW_COUNT; ++i) {
    //    drawArrow(arrows[i], startX + i * 2, targetY); // 빈 화살표 위치
    //}

    //while (true) {
    //    system("cls"); // 화면 지우기

    //    // 빈 화살표 다시 그리기
    //    for (int i = 0; i < ARROW_COUNT; ++i) {
    //        drawArrow(arrows[i], startX + i * 2, targetY);
    //    }

    //    // 새 화살표 추가
    //    if (rand() % 10 < 3) { // 확률적으로 화살표 추가
    //        int arrow = arrows[rand() % arrows.size()];
    //        arrowPositions.push_back({ arrow, 0 }); // 화살표와 시작 위치
    //    }

    //    // 화살표 이동
    //    for (auto& arrowPos : arrowPositions) {
    //        drawArrow(arrowPos.first, startX + (arrowPos.first - 72) / 3 * 2, startY + arrowPos.second++);
    //    }

    //    // 사용자 입력 처리
    //    if (_kbhit()) {
    //        int input = _getch();
    //        if (input == 224) { // 방향키 입력 처리
    //            input = _getch();
    //            for (auto it = arrowPositions.begin(); it != arrowPositions.end(); ) {
    //                if (it->first == input && it->second + startY >= targetY - 1 && it->second + startY <= targetY + 1) {
    //                    it = arrowPositions.erase(it); // 화살표 제거
    //                    score++; // 점수 증가
    //                }
    //                else {
    //                    ++it;
    //                }
    //            }
    //        }
    //    }

    //    // 화살표가 범위를 벗어난 경우 제거
    //    arrowPositions.erase(remove_if(arrowPositions.begin(), arrowPositions.end(), [targetY](const pair<int, int>& arrowPos) {
    //        return arrowPos.second + startY > targetY + 1;
    //        }), arrowPositions.end());

    //    gotoxy(0, targetY + 2);
    //    cout << "Score: " << score << endl;

    //    Sleep(100); // 게임 속도 조절
    //}



#pragma endregion


#pragma region Deque

    //std::deque<int> deque;

    //deque.push_front(10);
    //deque.push_back(5);

    //deque.push_front(7);
    //deque.push_back(11);

    //for (int i = 0; i < deque.size(); i++)
    //{
    //    cout << "deque의 [ " << i << "] : " << deque[i] << endl;
    //}

    //deque.pop_front();
    //deque.pop_back();

    //cout << "----------------------------------------------" << endl;

    //for (int i = 0; i < deque.size(); i++)
    //{
    //    cout << "deque의 [" << i << "] : " << deque[1] << endl;
    //}


#pragma endregion




#pragma endregion


    return 0;
}


