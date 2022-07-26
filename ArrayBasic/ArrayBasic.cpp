#include <iostream>
using namespace std;


// 오늘의 주제 : 배열

struct StatInfo
{

    int hp = 0xAAAAAAAA;
    int attack = 0xBBBBBBBB;
    int defence = 0xDDDDDDDD;

};


int main()
{
    // 근데 몬스터가 최대 1만마리!

    // StatInfo monster;
    // StatInfo moster_2;
    // .......


    // TYPE 이름[개수];
    const int monsterCount = 10;
    // 배열의 크기는 상수여야 한다 (VC 컴파일러 기준)
    StatInfo monsters[monsterCount];

    // 여태껏 변수들의 [이름]은 바구니의 이름이었음
    int a = 10;
    int b = a;

    // 그런데 배열은 [이름]이 조금 다르게 동작한다.
    // StatInfo players[10];
    // players = monsters;

    // 그럼 배열의 이름은 뭐지?
    // 배열의 이름은 곧 배열의 시작 주소
    // 정확히는 시작 위치를 가리키는 TYPE* 포인터
    auto WhoAmI = monsters;

    // StatInfo[] StatInfo[] ....
    // monster_0[주소]

    StatInfo* monster_0 = monsters;
    monster_0->hp = 100;
    monster_0->attack = 10;
    monster_0->defence = 1;

    // 포인터의 덧셈! 진짜 1을 더하라는게 아니라, StatInfo 타입 바구니 한개씩 이동하라!
    StatInfo* monster_1 = monsters + 1;

    monster_1->hp = 100;
    monster_1->attack = 10;
    monster_1->defence = 1;

    // 포인터와 참조는 자유자재로 변환 가능하다

    StatInfo& monster_2 = *(monsters + 2);
    monster_2.hp = 300;
    monster_2.attack = 20;
    monster_2.defence = 1;

    // 아래쪽은 배열 내용을 복사하는 것 (원본 수정 x)

    StatInfo temp;
    temp = *(monsters + 2);
    temp.hp = 100;
    temp.attack = 300;
    temp.defence = 3;

    // 이를 조금 더 자동화 한다!!
    for (int i = 0; i < 10; i++)
    {
        StatInfo& monster = *(monsters + i);
        monster.hp = 100 * (i * 1);
        monster.attack = 10 * (i * 1);
        monster.defence = 1 * i;

        // StatInfo monster = monsters[i];
        // monsters[i].hp = 300;
        // ....

    }

    // 근데 *(monster + i) 너무 불편하고 가독성이 구리다
    // 인덱스!
    // 배열은 0번부터 시작, N번째 인덱스에 해당하는 데이터에 접근하려면 배열이름[N]
    // *(monster + i) = monsters[i]


    // 배열 초기화 문법 몇가지
    // for문을 돌려서 다 세팅할수도 있지만?
    // int number[5];   // 기본상태로는 cccccccc가 들어있음
    int number[5] = {}; // number를 0으로 민다
    int numbers1[10] = { 1,2,3,4,5 };   // 설정한 애들은 설정한 값으로 설정안한 나머지는 0으로 밀림
    int numbers2[] = { 1,2,3,4,5,6,7,8,9,10,11, }; // []를 비워두면 알아서 개수에 해당하는 배열로 만들어준다

    char helloStr[] = { 'H','E','L','L','O','\0' };
    cout << helloStr << endl;

  
   
    
    
    

}

