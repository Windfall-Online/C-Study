#include <iostream>
using namespace std;

// ������ ���� : ������ �ǽ�

struct  StatInfo    // �� 12����Ʈ
{                   // ������
    int hp;         // +0
    int attack;     // +4
    int defence;    // +8

};

void EnterLobby();
StatInfo CreatePlayer();                // �Լ��ȿ��� ������ ����
void CreateMonster(StatInfo* info);     // �����ͷ� �Ѱܼ� �Լ� �ȿ��� ����
bool StartBattle(StatInfo* player, StatInfo* monster);
// �÷��̾� �¸��� True, �ƴϸ� False 


int main()
{
    
    EnterLobby();
    
}

void EnterLobby()
{
    cout << "�κ� �����߽��ϴ�" << endl;
    StatInfo player;

    player = CreatePlayer();

    StatInfo monster;
    CreateMonster(&monster);

    // ������1)
    // ����ü���� ������ �� ���� ���� ��������?

    // player = moster;
    // player.hp = monster.hp; 
    // ....
    // �Ѷ��Ѷ� ��������

    bool victory = StartBattle(&player, &monster);
    if (victory)
        cout << "�¸�" << endl;
    else
        cout << "�й�" << endl;
}

StatInfo CreatePlayer()
{
    StatInfo ret;

    // ������ ����

    cout << "�÷��̾� ����" << endl;
    ret.hp = 100;
    ret.attack = 10;
    ret.defence = 2;

    return ret;
}

void CreateMonster(StatInfo* info)
{
    cout << "���� ����" << endl;
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
        cout << "���� HP : " << monster->hp << endl;

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
		cout << "�÷��̾� HP : " << monster->hp << endl;

		if (monster->hp == 0)
		{
			return false;
		}
        
    }
}
