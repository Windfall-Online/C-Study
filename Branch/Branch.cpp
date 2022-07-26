#include <iostream>
using namespace std;


int main()
{
    int hp = 100;
    int damage = 100;

    const int ROCK = 0;
    const int PAPER = 1;
    const int SCISSORS = 2;

    int input = ROCK;

    hp -= damage; // 피격 판정

    bool isDead = (hp <= 0); // 처치판정
    

    // 몬스터가 죽었으면 경험치 추가
    // 어셈블리에서 CMP와 JMP를 사용했었음

    if (isDead)
    {
        cout << "몬스터를 처치했습니다 " << endl;
    }
    else
    //if (isDead == false) // !isDead보다 가독성이 좋음
         cout << "몬스터가 반격했습니다" << endl;
    
    // 반복이 많이 될 때 사용하는 switch


    switch (input)
    {
    case ROCK:
        cout << "바위를 냈습니다" << endl;
        break;
    case PAPER:
        cout << "보를 냈습니다" << endl;
        break;
    case SCISSORS:
        cout << "가위를 냈습니다" << endl;
        break;
    default:
        cout << "뭘 낸겁니까?" << endl;
        break;

    }


}
