#include <iostream>
using namespace std;

// ������ ���� : �Լ� ��ü

void HelloWorld()
{
	cout << "Hello World" << endl;
}

void HelloNumber(int number)
{
	cout << "Hello Number" << number << endl;
}

class Knight
{
public:
	void AddHp(int addHp)
	{
		_hp += addHp;
	}
private:
	int _hp = 100;
};


class Functor
{
public:

	void operator()()
	{
		cout << "Functor Test" << endl;
		cout << _value << endl;
	}

	bool operator()(int num)
	{
		cout << "Functor Test" << endl;
		_value += num;
		cout << _value << endl;

		return true;
	}


private:
	int _value = 0;
};

class MoveTask
{
public:
	void operator()()
	{
		// TODO
		cout << "�ش� ��ǥ�� �÷��̾� �̵�" << endl;
	}
public:

	int _playerid;
	int _posX;
	int _posY;
};

int main()
{
	// �Լ� ��ü (Functor) : �Լ�ó�� �����ϴ� ��ü
	// �Լ� �������� ����
	// 1. ������ ������ �ñ״�ó�� ������� �Լ��� ��� ����


	// �Լ� ������ ����
	void(*pfunc)(void);

	pfunc = &HelloWorld;
	(*pfunc)();

	// �Լ� �������� ġ������ ����
	// 1) �ñ״�ó�� �� ������ ����� �� ����
	// 2) ���¸� ���� �� ����(Ŭ������ �ʵ�)

	// [�Լ�ó�� ����]�ϴ� ��ü
	HelloWorld(); // ()�̰� �ʿ���

	Functor functor;

	functor();
	bool ret = functor(3);
	
	// MMO���� �Լ� ��ü�� ����ϴ� ����
	// Ŭ�� <-> ����
	// ���� : Ŭ�� ������ ��Ʈ��ũ ��Ŷ�� �޾Ƽ� ó��
	// ex) Ŭ�� : �� (5, 0) ��ǥ�� �̵�������!!
	MoveTask task;

	// ���߿� ���� �Ŀ� �ϰ��� �����Ѵ�!
	task._playerid = 100;
	task._posX = 5;
	task._posY = 0;
	
	task();
}



