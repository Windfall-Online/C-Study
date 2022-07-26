#include <iostream>
using namespace std;

// ������ ���� : ��ü���� ������

// 1) struct vs class

// C++������ struct�� class�� ���� �� �� ����
// struct�� �⺻ ���� �����ڰ� public�̰�, class�� private�̴�
// �� �̷��� ������? C++�� C���� �Ļ��Ǿ� �����߱� ������, ȣȯ���� ��Ű�� ����
// -> struct�� �׳� ����ü (������ ����)�� ǥ���ϴ� �뵵
// -> class�� ��ü ���� ���α׷����� Ư¡

struct TestStruct
{
	int _a;
	int _b;
};

class TestClass
{
	int _a;
	int _b;
};

// 2) static ����, static �Լ� (static = ���� = ������)
class Marine
{
public:
	// Ư�� ���� ��ü�� ������
	int _hp;
	
	// �굵 Ư�� �������� ���ӵ� �Լ�
	void TakeDamage(int damage)
	{
		_hp -= damage;
	}

	static void SetAttack()
	{
		//_hp = 100;
		// static �Լ� �ȿ����� static ������ ���� ����
		s_attack = 100;
	}

	// Ư�� ���� ��ü�� ����
	// �����̶�� 'Ŭ����' ��ü�� �������� ����
	static int s_attack; // ���赵�����θ� ����
};

// Marine �ν��Ͻ��� ���ӵȰ� �ƴ� ��� ������ ���������� ������ �ְԵ�
// static ������ � �޸�?
// �ʱ�ȭ �ϸ� .data
// �ʱ�ȭ ���ϸ� .bss

int Marine::s_attack = 0; // �ܺ� ����

class Player
{
public:
	int _id;
};

int GenerateId()
{
	// �����ֱ�: ���α׷� ����/���Ḧ ���� (�޸𸮿� �׻� �ö� ����)
	// ���ù���: 

	// ���� �����̱� �ѵ� ���ÿ� �þƿԾ���� ����
	// ���� ���� ��ü
	static int s_id = 1;
	
	return s_id++;
}

int main()
{
	Marine m1;
	m1._hp = 40;
	m1.s_attack = 6;


	Marine m2;
	m2._hp = 40;
	m2.s_attack = 6;

	// ���� ���ݷ� �� �׷��̵� �Ϸ�! (Academy���� ���׷��̵� ��)
	m1.s_attack = 7;
	m2.s_attack = 7;
	// Marine Ŭ���� ��ü�� s_attack ����
	Marine::s_attack = 8;
	Marine::SetAttack();

	// ���� �ƴ�, .data ����
	static int id = 10;
	int a = id;

	cout << GenerateId() << endl;
	cout << GenerateId() << endl;
	cout << GenerateId() << endl;
	cout << GenerateId() << endl;

}
