#include <iostream>
using namespace std;

// 오늘의 주제 : 연산자 오버로딩(Operator Overloading)

// 연산자 vs 함수
// -연산자는 피연산자의 개수/타입이 고정되어 있음

// 연산자 오버로딩?
// 일단 [연산자 함수]를 정의 해야함
// 함수도 멤버함수 vs 전역함수가 존재하는것처럼, 연산자 함수도 두가지 방식으로 만들 수 있음

// -멤버 연산자 함수 version
// -- a op b 형태에서 왼쪽으로 기준으로 실행 (a가 클래스여야 가능, a를 '기준  피연산자' 라고 함)


// 위에 대한 대안
// - 전역 연산자 함수 version
// -- a op b 형태라면 a, b모두를 연산자 함수의 피연산자로 만들어준다

// 그럼 무엇이 더 좋은가? 그런거 없음, 심지어 둘 중 하나만 지원하는 경우도 있다.
// - 대표적으로 대입 연산자 (a = b)는 전역 연산자 version으로는 못 만든다.

// 복사 대입 연산자
// - 대입 연산자가 나온 김에 [복사 대입 연산자]에 대해 알아보자
// 용어가 좀 헷갈린다 [복사 생성자] [대입 연산자] [복사 대입 연산자]
// - 복사 대입 연산나 = 대입 연산자 중, 자기 자신의 참조 타입을 인자로 받는 것

// 기타
// - 모든 연산자를 다 오버로딩 할 수 있는 것은 아님(::, ., * 이런건 안됨)
// - 모든 연산자가 다 2개 항이 있는 것 아님 ++, --가 대표적 (단항 연산자)
// - 증감 연산자 ++, --
// -- 전위형 (++a) operator++()
// -- 후위형 (a++) operator++(int)

class Position
{

public:
	// 복사 생성자
	
	Position operator+(const Position& arg)
	{
		Position pos;
		pos._x = _x + arg._x;
		pos._y = _y + arg._y;
		return pos;
	}
	Position operator+(int arg)
	{
		Position pos;
		pos._x = _x + arg;
		pos._y = _y + arg;
		return pos;
	}

	bool operator==(const Position& arg)
	{
		return _x == arg._x && _y == arg._y;
	}

	// void가 아니라 자기 자신의 참조값
	Position& operator=(int arg)
	{
		_x = arg;
		_y = arg;
		//Position* this = 내자신의 주소;
		return *this;
	}

	// [복사 생성자 [복사 대입 연산자] 등 특별 대우를 받는 이유는,
	// 말 그대로 객체가 '복사'되길 원하는 특징 때문
	// TODO) 동적할당 시간에 더 자세히 알아볼 것
	Position& operator=(const Position& arg)
	{
		_x = arg._x;
		_y = arg._y;
		//Position* this = 내자신의 주소;
		return *this;
	}

	Position& operator++()
	{
		_x++;
		_y++;
		return *this;
	}

	Position operator++(int)
	{
		Position ret = *this;
		_x++;
		_y++;
		return ret;
	}

public:
	int _x;
	int _y;


};

Position operator+(int a, const Position& b)
{
	Position ret;
	ret._x = b._x + a;
	ret._y = b._y + a;
	return ret;
}
//void operator=(const Position& a, int b)
//{
//	a._x = b;
//	a._y = b;
//}

int main()
{
	int a = 1;
	int b = 2;

	//int c = a + 3.0f;

	Position pos;
	pos._x = 0;
	pos._y = 0;

	Position pos2;
	pos2._x = 1;
	pos2._y = 1;

	Position pos3 = pos + pos2;
	//pos3 = pos.operator+(pos2);

	Position pos4 = pos3 + 1;

	// 클래스를 비교를 해보기!
	bool inSame = (pos3 == pos4);

	Position pos5;
	pos3 = pos5 = 5;

	pos3++;
	++pos3;
	// (const Pos&)를 줘~ (Pos)복사값 줄께~
	// 임시적으로 하나 만들고 다시 대입
	// 타입이 다름에도 불구하고 const를 붙이면 어거지로 어떻게든 맞춰줌
	Position tempPos = pos3++;
	pos5 = tempPos;
	
	pos5 = pos3++;
	pos3.operator++(1);
}

