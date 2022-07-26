#include <iostream>
using namespace std;


// ������ ���� : ��Ӽ�

// ��ü���� (OOP Object Oriented Programming)
// - ��Ӽ�
// - ���м�
// - ������

// ���(inheritance) ? �θ� -> �ڽĿ��� ������ �����ִ� ��

// ������(N��)/�Ҹ���(1��)

// �����ڴ� ź���� ����ؼ� ȣ��Ǵ� �Լ�?
// ~Knight�� �����ϸ� -> Player�� ������? Knight�� ������
// -> �Ѵ� ȣ���

// �Ϲ����� ����
// GameObject
// - Creature(��� �����̴� ��)
// -- Player, Monster, NPC, Pet
// - Projectile(����ü)
// -- Arrow, FireBall
// - Env(ä����)

// Items
// - Weapon
// -- Sword, Bow
// - Armor
// -- Helmet, Plate

// �޸�

// [[Player]]
// [ Knight ]

class GameOBject
{
public:
	int _objectid;
};

class Player : public GameOBject
{
public:
	Player()
	{
		_hp = 0;
		_attack = 0;
		_defence = 0;
		cout << "Player() �⺻ ������ ȣ��" << endl;
	}

	Player(int hp)
	{
		_hp = hp;
		_attack = 0;
		_defence = 0;
		cout << "Player(int hp)������ ȣ��" << endl;
	}

	~Player()
	{
		cout << "~Player �⺻ �Ҹ��� ȣ��" << endl;
	}


	void Move() { cout << "Player Move ȣ��" << endl; }
	void Attack() { cout << "Player Attack ȣ��" << endl; }
	void Die() { cout << "Player Die ȣ��" << endl; }
public:
	int _hp;
	int _attack;
	int _defence;
};

class Knight : public Player
{
public:
	Knight()
		/*
		��ó�� ����
		- ���⼭ Player() �����ڸ� ȣ��
		*/	
	{
		_attack = 0;
		_defence = 0;	_hp = 0;

		_stamina = 10;
		cout << "Knight() �⺻ ������ ȣ��" << endl;
	}
	Knight(int stamina) : Player(100)
		/*
		��ó�� ����
		- ���⼭ Player() �����ڸ� ȣ��
		*/
	{
		_stamina = stamina;
		cout << "Knight(int stamina)������ ȣ��" << endl;
	}

	~Knight()
	{
		cout << "~Knight() �⺻ �Ҹ��� ȣ��" << endl;
	}
public:
	// ������ : �θ�Ŭ������ ����� �ź��ϰ� ���ο� �̸����� ����
	// �Ȱ��� �̸����� �ι� ������ָ� �����
	void Move() { cout << "Knight Move ȣ��" << endl; }

public:
	int _stamina;

};

class Mage : public Player
{

};

int main()
{

	Knight k;

	k._hp = 100;
	k._attack = 10;
	k._defence = 5;
	k._stamina = 50;




	//k.Move();
	// �θ� Ŭ���� �޼ҵ� ȣ��
	//k.Player::Move();

	//k.Attack();
	//k.Die();

}

