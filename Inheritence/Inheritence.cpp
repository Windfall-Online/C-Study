#include <iostream>
using namespace std;


// 오늘의 주제 : 상속성

// 객체지향 (OOP Object Oriented Programming)
// - 상속성
// - 은닉성
// - 다형성

// 상속(inheritance) ? 부모 -> 자식에게 유산을 물려주는 것

// 생성자(N개)/소멸자(1개)

// 생성자는 탄생을 기념해서 호출되는 함수?
// ~Knight를 생성하면 -> Player의 생성자? Knight의 생성자
// -> 둘다 호출됨

// 일반적인 게임
// GameObject
// - Creature(살아 움직이는 거)
// -- Player, Monster, NPC, Pet
// - Projectile(투사체)
// -- Arrow, FireBall
// - Env(채집물)

// Items
// - Weapon
// -- Sword, Bow
// - Armor
// -- Helmet, Plate

// 메모리

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
		cout << "Player() 기본 생성자 호출" << endl;
	}

	Player(int hp)
	{
		_hp = hp;
		_attack = 0;
		_defence = 0;
		cout << "Player(int hp)생성자 호출" << endl;
	}

	~Player()
	{
		cout << "~Player 기본 소멸자 호출" << endl;
	}


	void Move() { cout << "Player Move 호출" << endl; }
	void Attack() { cout << "Player Attack 호출" << endl; }
	void Die() { cout << "Player Die 호출" << endl; }
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
		선처리 영역
		- 여기서 Player() 생성자를 호출
		*/	
	{
		_attack = 0;
		_defence = 0;	_hp = 0;

		_stamina = 10;
		cout << "Knight() 기본 생성자 호출" << endl;
	}
	Knight(int stamina) : Player(100)
		/*
		선처리 영역
		- 여기서 Player() 생성자를 호출
		*/
	{
		_stamina = stamina;
		cout << "Knight(int stamina)생성자 호출" << endl;
	}

	~Knight()
	{
		cout << "~Knight() 기본 소멸자 호출" << endl;
	}
public:
	// 재정의 : 부모클래스의 상속을 거부하고 새로운 이름으로 만듬
	// 똑같은 이름으로 두번 만들어주면 덮어씌움
	void Move() { cout << "Knight Move 호출" << endl; }

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
	// 부모 클래스 메소드 호출
	//k.Player::Move();

	//k.Attack();
	//k.Die();

}

