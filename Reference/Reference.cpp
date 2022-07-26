#include <iostream>
using namespace std;



struct StatInfo
{			
	int hp;				// +0
	int attack;			// +4
	int defence;		// +8
};

// [�Ű�����][RET][��������(info)][�Ű�����(&info)][RET][��������]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

// [�Ű�����][RET][��������(info)[�Ű�����(info)[RET][��������]
void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}

// ���� �������� �ʴ´ٸ�, ���� �� �ϴ� ���� ����
// 1) �� ���� ���
// [�Ű�����][RET][��������(info)[�Ű�����(info)[RET][��������]
// ������ ���� ������ �� ���� ����
void PrintInfoByCopy(StatInfo info)
{	
	cout << "=======================" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "ATT: " << info.attack << endl;
	cout << "DEF: " << info.defence << endl;
	cout << "=======================" << endl;
}
// 2) �ּ� ���� ���
// [�Ű�����][RET][��������(info)[�Ű�����(&info)[RET][��������]
// ������ �����͸� ��������
void PrintInfoByPtr(StatInfo* info)
{
	cout << "=======================" << endl;
	cout << "HP: " << info->hp << endl;
	cout << "ATT: " << info->attack << endl;
	cout << "DEF: " << info->defence << endl;
	cout << "=======================" << endl;
}

// StatInfo ����ü�� 1000����Ʈ¥�� ���� ����ü���?
// - (�� ����) StatInfo�� �ѱ�� 1000����Ʈ�� ����Ǵ°Ű�
// - (�ּ� ����) StatInfo* �� 4����Ʈ or 8����Ʈ
// - (���� ����) StatInfo& �� 4����Ʈ or 8����Ʈ


// 3 ) ���� ���� ���
// �� ����ó�� ���ϰ� ����ϰ�!
// �ּ� ����ó�� �ּҰ��� �̿��� ������ �ǵ帮��
// �ϼ�����!


void PrintInfoByRef(StatInfo& info)
{
	cout << "=======================" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "ATT: " << info.attack << endl;
	cout << "DEF: " << info.defence << endl;
	cout << "=======================" << endl;
}


int main()
{

	// ���� Ÿ��
	// C���� ���������ʰ� CPP������ �߰��� ���

	// 4����Ʈ ������ �ٱ��ϸ� ����Ұ���
	// �ٱ��� �̸��� number
	// number���� �� �����ų�, number�� �� �ִ´ٰ� �ϸ�
	// �������� �˾Ƶ�� �ش� �ּҿ�(data, stack, heap) ���� �־���
	
	int number = 1;		

	// * �ּҸ� ��� �ٱ���
	// int �� �ٱ��ϸ� ���󰡸� int �����Ͱ� ����
	int* pointer = &number;

	// pointer �ٱ��Ͽ� �ִ� �ּҸ� Ÿ�� �̵��ؼ�, �� �ָ� �ִ� �ٱ��Ͽ� 2�� �ִ´�
	*pointer = 2;

	// �ο췹��(�����) �������� ���� �۵� ����� int*�� �Ȱ���
	// ������ �����غ��� �����Ͷ� 100% �Ȱ���.
	int& reference = number;

	// C++ ���������� number��� �ٱ��Ͽ� �� �ٸ� �̸��� �ο��� ��.
	// number��� �ٱ��Ͽ� reference��� �ٸ� �̸��� �����ٰ�~~
	// ������ reference �ٱ��Ͽ��ٰ� �� �����ų� ������,
	// ���� number �ٱ���(�������ٰ�) �� ���� �����ų� ������ �ȴ�.

	reference = 3;
	// ��ǻ� number = 3�� �Ȱ���
	// �׷��� �� ������ �� �ٸ� �̸��� ���°�?
	// �׳� number = 3�̶�� �ص� �Ȱ�����.....;;;?
	// ���� ���� ����
	// �����ͷ� �ѱ涧 ->�� �����ȵ�
	// �� ����� ������ ������ �����ͻ���� ->�� �����ȵ�



	StatInfo info;
	CreateMonster(&info);
	PrintInfoByCopy(info);
	PrintInfoByRef(info);

}

