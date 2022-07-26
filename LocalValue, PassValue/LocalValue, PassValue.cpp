#include <iostream>
using namespace std;


// 오늘의 주제 : 지역 변수와 값 전달


// 전역 변수
// 참고) 초기화 여부, const 등 .rodata .data .bss

int globalValue = 0;


void Test()
{
	
	cout << "전역 변수의 값은 : " << globalValue << endl;
	globalValue++;
}

void increaseHp(int hp)
{
	hp = hp + 1;
	
}

int main()
{
	cout << "전역 변수의 값은 : " << globalValue << endl;
	globalValue++;

	Test();

	// 지역 변수
	
	int hp = 1;

	cout << "increase 호출 전 : " << hp << endl;

	increaseHp(hp);

	cout << "increase 호출 후 : " << hp << endl;




}
