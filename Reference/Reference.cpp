#include <iostream>
using namespace std;



struct StatInfo
{			
	int hp;				// +0
	int attack;			// +4
	int defence;		// +8
};

// [매개변수][RET][지역변수(info)][매개변수(&info)][RET][지역변수]
void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

// [매개변수][RET][지역변수(info)[매개변수(info)[RET][지역변수]
void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}

// 값을 수정하지 않는다면, 양쪽 다 일단 문제 없음
// 1) 값 전달 방식
// [매개변수][RET][지역변수(info)[매개변수(info)[RET][지역변수]
// 원본의 값을 복사한 후 꺼내 쓰기
void PrintInfoByCopy(StatInfo info)
{	
	cout << "=======================" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "ATT: " << info.attack << endl;
	cout << "DEF: " << info.defence << endl;
	cout << "=======================" << endl;
}
// 2) 주소 전달 방식
// [매개변수][RET][지역변수(info)[매개변수(&info)[RET][지역변수]
// 원본의 데이터를 꺼내쓰기
void PrintInfoByPtr(StatInfo* info)
{
	cout << "=======================" << endl;
	cout << "HP: " << info->hp << endl;
	cout << "ATT: " << info->attack << endl;
	cout << "DEF: " << info->defence << endl;
	cout << "=======================" << endl;
}

// StatInfo 구조체가 1000바이트짜리 대형 구조체라면?
// - (값 전달) StatInfo로 넘기면 1000바이트가 복사되는거고
// - (주소 전달) StatInfo* 는 4바이트 or 8바이트
// - (참조 전달) StatInfo& 는 4바이트 or 8바이트


// 3 ) 참조 전달 방식
// 값 전달처럼 편리하게 사용하고!
// 주소 전달처럼 주소값을 이용해 진퉁을 건드리는
// 일석이조!


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

	// 참조 타입
	// C에는 존재하지않고 CPP에서만 추가된 기능

	// 4바이트 정수형 바구니를 사용할거임
	// 바구니 이름은 number
	// number에서 뭘 꺼내거나, number에 뭘 넣는다고 하면
	// 찰떡같이 알아듣고 해당 주소에(data, stack, heap) 값을 넣어줌
	
	int number = 1;		

	// * 주소를 담는 바구니
	// int 그 바구니를 따라가면 int 데이터가 있음
	int* pointer = &number;

	// pointer 바구니에 있는 주소를 타고 이동해서, 그 멀리 있는 바구니에 2를 넣는다
	*pointer = 2;

	// 로우레벨(어셈블리) 관점에서 실제 작동 방식은 int*와 똑같음
	// 실제로 실행해보면 포인터랑 100% 똑같다.
	int& reference = number;

	// C++ 관점에서는 number라는 바구니에 또 다른 이름을 부여한 것.
	// number라는 바구니에 reference라는 다른 이름을 지어줄게~~
	// 앞으로 reference 바구니에다가 뭘 꺼내거나 넣으면,
	// 실제 number 바구니(진퉁에다가) 그 값을 꺼내거나 넣으면 된다.

	reference = 3;
	// 사실상 number = 3과 똑같음
	// 그런데 왜 귀찮게 또 다른 이름을 짓는가?
	// 그냥 number = 3이라고 해도 똑같은데.....;;;?
	// 참조 전달 때문
	// 포인터로 넘길때 ->가 맘에안듬
	// 값 복사는 성능이 구리고 포인터사용은 ->가 맘에안듬



	StatInfo info;
	CreateMonster(&info);
	PrintInfoByCopy(info);
	PrintInfoByRef(info);

}

