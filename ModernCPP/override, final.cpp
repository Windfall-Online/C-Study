#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// ������ ���� : override, final

class Creature
{
public:
	virtual void Attack()
	{
		cout << "Creature!" << endl;
	}
};

class Player : public Creature
{
public:
	virtual void Attack() override
	{
		cout << "Player!" << endl;
	}
};

class Knight : public Player
{
public:
	// ������(override)
	// final = ���� final�� ���� �Լ��� override�� �Ҽ� ����
	virtual void Attack() final
	{
		cout << "Knight!" << endl;
		//_stamina = 10; ���� �Ұ� read only����
	}
private:
	int _stamina = 100;
};


int main()
{

	Player* c = new Knight();

	c->Attack();


}