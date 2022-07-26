#include <iostream>
using namespace std;

// 오늘의 주제 : 호출 스택
// 컴파일을 할때 위에서 아래로 감
// Func1()을 호출하고 Func2()를 볼때 
// 컴파일러는 Func2()가 뭔지 모름

// 함수 선언
// 구현부는 관심없고 시그니처만 만들어주면 된다
void Func1();
void Func2(int a, int b);
void Func3(float a);



int main()
{
    cout << "main" << endl;
    Func1();
}

void Func1()
{
	cout << "Func1" << endl;
	// Func2()의 위치가 어디인지 서로 합의가 되어야함
	// 내용물은 중요치 않음
	// push 2
	// push 1
	// call Func2

	Func2(1, 2);
}


void Func2(int a, int b)
{
	cout << "Func2" << endl;
	Func3(10.f);
}


void Func3(float damage)
{
	cout << "Func3" << endl;
}