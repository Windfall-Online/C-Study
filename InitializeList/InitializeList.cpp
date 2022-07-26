#include <iostream>
using namespace std;

// 오늘의 주제 : 초기화 리스트

// 멤버 변수 초기화 ? 다양한 문법이 존재

// 초기화 왜 할까? 귀찮다
// - 버그 예방에 중요
// - 포인터 등 주소값이 연루되어 있을 경우

// 초기화 방법
// - 생성자 내에서
// - 초기화 리스트
// - C++11 문법

// 초기화 리스트
// - 일단 상속 관계에서 원하는 부모 생성자 호울할 때 필요하다
// - 생성자 내에서 초기화 vs 초기화 리스트
// -- 일반 변수는 별 차이 없음
// -- 멤버 타입이 클래스일 때 차이 발생
// -- 정의함과 동시에 초기화가 필요한 경우 (참조 타입, const 타입)

class Inventory
{
public:
	Inventory() { cout << "Inventory()" << endl; }
	Inventory(int size) { cout << "Inventory(int size)" << endl; _size = size; }

	~Inventory() { cout << "~Inventory()" << endl; }
public:
	int _size = 10;
};

class Player
{
public:

	Player() {}
	Player(int id){}

public:
};

// Is-A 관계 (Knight Is-A Player?) 기사는 플레이어다 OK -> 상속
// Is-A 관계 (Knight Is-A Inventory?) 기사는 인벤토리다? No -> 포함

// Has-A 관계 (Knight Has-A Inventory? 기사는 인벤토리를 포함하고 있다 갖고 있다)
// OK -> 포함 관계

class Knight : public Player
{
public:
	Knight() : Player(1), _hp(100), _inventory(20), _hpRef(_hp), _hpConst(100)
		/*
		선처리 영역
		Player의 생성자를 알아서 간접적으로 호출
		Inventory의 기본 생성자가 같이 호출
		Inventory()
		*/
	{
		_hp = 100;
	}
public:

	int _hp;
	// 인벤토리가 선처리 영역에서 만들어짐
	Inventory _inventory;

	int& _hpRef;
	const int _hpConst;
};

int main()
{
	Knight k;

	cout << k._hp << endl;
}
