#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// 오늘의 주제 : 오른값(rvalue) 참조와 std::move

class Pet
{

};

class Knight
{
public:
	void PrintInfo() const
	{

	}

	Knight()
	{
		cout << "Knight()" << endl;
	}
	
	Knight(const Knight& knight)
	{
		cout << "const Knight()" << endl;
	}

	~Knight()
	{
		if (_pet)
			delete _pet;
	}
	// 복사 대입 연산자
	void operator=(const Knight& knight)
	{
		cout << "operator=(const Knight&)" << endl;

		// 깊은 복사
		_hp = knight._hp;
		if(knight._pet)
			_pet = new Pet(*knight._pet);


	}   
	// 이동 생성자
	Knight(Knight&& knight)
	{

	}

	// 이동 대입 연산자
	void operator=(Knight&& knight) noexcept
	{
		cout << "operator=(const Knight&)" << endl;

		// 이동 대입 연산자를 이용하면
		// 얕은 복사로도 실현 가능
		_hp = knight._hp;
		_pet = knight._pet;

		knight._pet = nullptr;

	}

public:
	int _hp = 100;
	Pet* _pet = nullptr;
};

void TestKnight_Copy(Knight knight) { };

// 임시값을 받고 고쳐봤자 어짜피 날아갈거라서 안됨
void TestKnight_LValueRef(Knight& knight) { };

// 날아갈 거지만 고칠수없어서 그냥 읽기용으로만 활용을 함 : 문법적으로 허용
// read-only
void TestKnight_ConstLValueRef(const Knight& knight) { };
// 오른값참조 함수 && 참조의 참조가 아니라 그냥 하나로 생각해야함
// 왼값이 안들어감
// 이동 대상!!!
// 신나게 사용하고 원본은 더이상 취급 안함
void TestKnight_RvalueRef(Knight&& knight) { };

int main()
{

	// 왼값(lvalue) vs 오른값(rvalue)
	// - lvalue : 단일식을 넘어서 계쏙 지속되는 개체
	// - rvalue : lvalue가 아닌 나머지 (임시 값, 열거형, 람다, i++)등

	// int a = 3;

	Knight k1;
	TestKnight_Copy(k1);
	//TestKnight_LValueRef(Knight());
	TestKnight_ConstLValueRef(Knight());

	TestKnight_RvalueRef(Knight());
	
	TestKnight_RvalueRef(static_cast<Knight&&>(k1));


	Knight k2;
	k2._pet = new Pet();
	k2._hp = 1000;

	// 원본은 날려도 된다 << 는 Hint를 주는 쪽에 가깝다
	Knight k3;
	k3 = static_cast<Knight&&>(k2);
	k3 = std::move(k2); // 오른값 참조로 캐스팅
	//std::move의 본래 이름 후보 중 하나가 rvalue_cast

	// 단 1개만 존재해야 하는 포인터
	std::unique_ptr<Knight> uptr = std::make_unique<Knight>();
	std::unique_ptr<Knight> uptr2 = std::move(uptr);



}