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

    hp -= damage; // �ǰ� ����

    bool isDead = (hp <= 0); // óġ����
    

    // ���Ͱ� �׾����� ����ġ �߰�
    // ��������� CMP�� JMP�� ����߾���

    if (isDead)
    {
        cout << "���͸� óġ�߽��ϴ� " << endl;
    }
    else
    //if (isDead == false) // !isDead���� �������� ����
         cout << "���Ͱ� �ݰ��߽��ϴ�" << endl;
    
    // �ݺ��� ���� �� �� ����ϴ� switch


    switch (input)
    {
    case ROCK:
        cout << "������ �½��ϴ�" << endl;
        break;
    case PAPER:
        cout << "���� �½��ϴ�" << endl;
        break;
    case SCISSORS:
        cout << "������ �½��ϴ�" << endl;
        break;
    default:
        cout << "�� ���̴ϱ�?" << endl;
        break;

    }


}
