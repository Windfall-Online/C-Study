#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// 오늘의 주제 : override, final

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
	// 재정의(override)
	// final = 봉인 final이 붙은 함수는 override를 할수 없음
	virtual void Attack() final
	{
		cout << "Knight!" << endl;
		//_stamina = 10; 수정 불가 read only가됨
	}
private:
	int _stamina = 100;
};


int main()
{

	Player* c = new Knight();

	c->Attack();


}