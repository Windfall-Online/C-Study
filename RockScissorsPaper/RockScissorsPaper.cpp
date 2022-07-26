#include <iostream>
using namespace std;

int main()
{
    // srand()를 이용해서 시드값을 설정해야함
    srand(time(0)); // 시드 설정

   

    // rand(); // 0~32767
    // 1, 2, 3가 랜덤으로 나옴
   
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    // rand()는 랜덤이 아님
    // 컴퓨터 자체에 랜덤은 존재할 수가 없음
    // 어떤 하나의 숫자를 기반으로 다음 숫자를 연산하는 일련의 과정을 거치게 됨

    const int SCISSORS = 1;
    const int ROCK = 2;
    const int PAPER = 3;

    int wins = 0;
    int total = 0;

    while (true)
	{
		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
        cout << "> ";

        if (total == 0)
        {
            cout << "현재 승률: 없음" << endl;
        }
        else 
        {
            //TODO : 확률을 구해준다.
            int winPercentage = (float)wins / total * 100;
        //  int winPercentage = (wins * 100) / total * 100;
            cout << "현재 승률 : " << winPercentage << endl;
 
        }


        // 컴퓨터
        int computerValue = (rand() % 3) + 1;

        // 사용자
        int input;
        cin >> input;

        if (input == SCISSORS)
        {
            switch (computerValue)
            {
            case SCISSORS:
                cout << "가위(사용자) vs 가위(컴퓨터) 비겼습니다!" << endl;
                break;
            case ROCK:
                cout << "가위(사용자) vs 바위(컴퓨터) 졌습니다!" << endl;
                total++;
                break;
            case PAPER:
                cout << "가위(사용자) vs 보(컴퓨터) 이겼습니다!" << endl;
                wins++;
                total++;
                break;
            }
        }
        else if (input == ROCK)
        {
			switch (computerValue)
			{
			case SCISSORS:
				cout << "바위(사용자) vs 가위(컴퓨터) 이겼습니다!" << endl;
                wins++;
                total++;
				break;
			case ROCK:
				cout << "바위(사용자) vs 바위(컴퓨터) 비겼습니다!" << endl;
				break;
			case PAPER:
				cout << "바위(사용자) vs 보(컴퓨터) 졌습니다!" << endl;
                total++;
				break;
			}
        }
        else if (input == PAPER)
        {
			switch (computerValue)
			{
			case SCISSORS:
				cout << "보(사용자) vs 가위(컴퓨터) 졌습니다!" << endl;
                total++;
				break;
			case ROCK:
				cout << "보(사용자) vs 바위(컴퓨터) 이겼습니다!" << endl;
                total++;
                wins++;
				break;
			case PAPER:
				cout << "보(사용자) vs 보(컴퓨터) 비겼습니다!" << endl;
				break;
			}
        }
        else 
            break; // while 빠져나가기


    }
    
}

