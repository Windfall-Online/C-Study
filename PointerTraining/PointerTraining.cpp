#include <iostream>
using namespace std;

// 오늘의 주제 : 포인터 실습

struct  StatInfo    // 총 12바이트
{                   // 오프셋
    int hp;         // +0
    int attack;     // +4
    int defence;    // +8

};

void EnterLobby();
StatInfo CreatePlayer();                // 함수안에서 셋팅후 리턴
void CreateMonster(StatInfo* info);     // 포인터로 넘겨서 함수 안에서 셋팅
bool StartBattle(StatInfo* player, StatInfo* monster);
// 플레이어 승리시 True, 아니면 False 


int main()
{
    
    EnterLobby();
    
}

void EnterLobby()
{
    cout << "로비에 입장했습니다" << endl;
    StatInfo player;

    player = CreatePlayer();

    StatInfo monster;
    CreateMonster(&monster);

    // 번외편1)
    // 구조체끼리 복사할 때 무슨 일이 벌어질까?

    // player = moster;
    // player.hp = monster.hp; 
    // ....
    // 한땀한땀 복사해줌

    bool victory = StartBattle(&player, &monster);
    if (victory)
        cout << "승리" << endl;
    else
        cout << "패배" << endl;
}

StatInfo CreatePlayer()
{
    StatInfo ret;

    // 데이터 셋팅

    cout << "플레이어 생성" << endl;
    ret.hp = 100;
    ret.attack = 10;
    ret.defence = 2;

    return ret;
}

void CreateMonster(StatInfo* info)
{
    cout << "몬스터 생성" << endl;
    info->hp = 40;
    info->attack = 8;
    info->defence = 1;

}

bool StartBattle(StatInfo* player, StatInfo* monster)
{
    while (true)
    {
        int damage = player->attack - monster->defence;
        if (damage < 0)
        {
            damage = 0;
        }

        monster->hp -= damage;
        if (monster->hp < 0)
        {
            monster->hp = 0;
        }
        cout << "몬스터 HP : " << monster->hp << endl;

        if (monster->hp == 0)
        {
            return true;
        }
        
        damage = monster->attack - player->defence;
        if (damage < 0)
        {
            damage = 0;
        }

        player->hp -= damage;

        if (player->hp < 0)
        {
            player->hp = 0;
        }
		cout << "플레이어 HP : " << monster->hp << endl;

		if (monster->hp == 0)
		{
			return false;
		}
        
    }
}
