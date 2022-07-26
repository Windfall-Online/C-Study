#include <iostream>
using namespace std;

// 오늘의 주제 : 함수 포인터2

 class Knight
{
public:
	
	int GetHp(int, int)
	{
		cout << "GetHp()" << endl;
		return _hp;
	}
public:
	int _hp = 100;
};
// typedef의 진실
// typedef 왼쪽 오른쪽값 -> 오른쪽 (커스텀 타입 정의)
// [선언 문법]에서 typedef을 앞에다 붙이는 쪽

typedef int NUBMER;

typedef int INTEGER;
typedef int* POINTER;
typedef int FUNC(int, int);     // FUNC()란 타입자체가 어떤 함수타입을 의미할 건데 인자는 아무것도 안받고
                        // 출력은 int로 해주겠다
typedef int ARRAY[20];

// 왜 가운데 이름이 낑기는지 이해하기
typedef int(*PFUNC)(int, int);             // 일반 함수 포인터


typedef int(Knight::*PMEMFUNC)(int, int);  // 멤버 함수 포인터

int Test(int a, int b)
{
    cout << "Test" << endl;
    return 0;
}



int main()
{
    // 함수 포인터
    // 1) 포인터           *
    // 2) 변수의 이름      fn
    // 3) 타입             함수(인자로 int2개를 받고, int 1개를 반환)
    
    //int(*fn)(int, int);    // 한방에 만드는 방법에 익숙해지자!

    //typedef int(FUNC_TYPE)(int, int);
    //FUNC_TYPE fn;
    
    PFUNC fn;

    fn = &Test; // & 생략 가능 (C언어의 호환성 때문) &를 붙이는걸 권장
    
    fn(1, 2);

    (*fn)(1, 2);

    // 위 문법으로는 [전역 함수 / 정적 함수]만 담을 수 있다 (호출 규약이 동일한)
    Test(1, 2);

    PMEMFUNC mfn;

    Knight k1;

    mfn = &Knight::GetHp;
    
    (k1.*mfn)(1, 2);

    Knight* k2 = new Knight();

    (k2->*mfn)(1, 2);


    delete k2;

}
