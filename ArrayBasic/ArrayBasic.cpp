#include <iostream>
using namespace std;


// ������ ���� : �迭

struct StatInfo
{

    int hp = 0xAAAAAAAA;
    int attack = 0xBBBBBBBB;
    int defence = 0xDDDDDDDD;

};


int main()
{
    // �ٵ� ���Ͱ� �ִ� 1������!

    // StatInfo monster;
    // StatInfo moster_2;
    // .......


    // TYPE �̸�[����];
    const int monsterCount = 10;
    // �迭�� ũ��� ������� �Ѵ� (VC �����Ϸ� ����)
    StatInfo monsters[monsterCount];

    // ���²� �������� [�̸�]�� �ٱ����� �̸��̾���
    int a = 10;
    int b = a;

    // �׷��� �迭�� [�̸�]�� ���� �ٸ��� �����Ѵ�.
    // StatInfo players[10];
    // players = monsters;

    // �׷� �迭�� �̸��� ����?
    // �迭�� �̸��� �� �迭�� ���� �ּ�
    // ��Ȯ���� ���� ��ġ�� ����Ű�� TYPE* ������
    auto WhoAmI = monsters;

    // StatInfo[] StatInfo[] ....
    // monster_0[�ּ�]

    StatInfo* monster_0 = monsters;
    monster_0->hp = 100;
    monster_0->attack = 10;
    monster_0->defence = 1;

    // �������� ����! ��¥ 1�� ���϶�°� �ƴ϶�, StatInfo Ÿ�� �ٱ��� �Ѱ��� �̵��϶�!
    StatInfo* monster_1 = monsters + 1;

    monster_1->hp = 100;
    monster_1->attack = 10;
    monster_1->defence = 1;

    // �����Ϳ� ������ ��������� ��ȯ �����ϴ�

    StatInfo& monster_2 = *(monsters + 2);
    monster_2.hp = 300;
    monster_2.attack = 20;
    monster_2.defence = 1;

    // �Ʒ����� �迭 ������ �����ϴ� �� (���� ���� x)

    StatInfo temp;
    temp = *(monsters + 2);
    temp.hp = 100;
    temp.attack = 300;
    temp.defence = 3;

    // �̸� ���� �� �ڵ�ȭ �Ѵ�!!
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

    // �ٵ� *(monster + i) �ʹ� �����ϰ� �������� ������
    // �ε���!
    // �迭�� 0������ ����, N��° �ε����� �ش��ϴ� �����Ϳ� �����Ϸ��� �迭�̸�[N]
    // *(monster + i) = monsters[i]


    // �迭 �ʱ�ȭ ���� ���
    // for���� ������ �� �����Ҽ��� ������?
    // int number[5];   // �⺻���·δ� cccccccc�� �������
    int number[5] = {}; // number�� 0���� �δ�
    int numbers1[10] = { 1,2,3,4,5 };   // ������ �ֵ��� ������ ������ �������� �������� 0���� �и�
    int numbers2[] = { 1,2,3,4,5,6,7,8,9,10,11, }; // []�� ����θ� �˾Ƽ� ������ �ش��ϴ� �迭�� ������ش�

    char helloStr[] = { 'H','E','L','L','O','\0' };
    cout << helloStr << endl;

  
   
    
    
    

}

