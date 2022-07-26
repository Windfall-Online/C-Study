#include <iostream>
using namespace std;
// 유의사항

// 1) 변수의 유효범위

// 전역 변수
// 전역 변수를 G_라고 앞에 붙이는 경우도 있음.(Global)
 int hp = 5550;

// 스택
// { } 중괄호의 범위가 생존 범위
// 같은 이름을 두번 사용할 때 문제가 된다.


// 2) 연산 우선순위

// 3) 타입 변환

// 4) 사칙 연산 관련

int main()
{
#pragma region 변수의 유효범위
	
	// 문제가 발생하는 경우
	// 함수 내부에 선언할 때

	int hp = 10;
	cout << hp << endl;

	//
	// 같은 이름을 2번쓰는 사고가 발생할 수 있음.
	//int i;
	//int count;
	//int hp = 100;
		
	// 값을 보존할 필요가없고 변경할 경우
	hp = 500;
	// 중괄호 하나를 인위적으로 하나 만들어버릴 수 있음.
	{
		int hp = 50000;
		// 생존 범위는 {}
	}
	// 이 밑으로가면 hp를 하나 재선언해도 상관이없다.

	// 전역 변수와 지역 변수가 겹칠 경우
	// 지역변수가 출력이 됨.
#pragma  endregion


#pragma region 연산 우선순위

	// 짝수 여부
	bool isEven = (hp % 2 == 0);
	// 누가 우선순위가 더 높을까?
	// Google C++연산 우선순위 참조
	// 매번 표를 참조하는건 바보짓
	// 조금이라도 혼동의 여지가있으면 소괄호로 집어주는게 가독성이 좋다
	isEven = ((hp % 2) == 0);

	// 짝수거나 3으로 나뉘는 값인지
	// 귀찮더라도 소괄호를 쳐줘야함
	bool isEvenOrDivBy3 = ((hp % 2) == 0) || ((hp % 3) == 0);
	


#pragma endregion


#pragma region 타입 변환
	// 바구니 교체
	// 캐스팅
	// 작은곳에서 큰곳으로 가는건 괜찮음
	// 큰곳에서 작은곳으로 가는건 문제가 발생
	
	short hp2 = hp; // 윗쪽 비트 데이터가 짤린 상태로 저장, 데이터 손실발생
	float hp3 = hp; // 실수로 변환할 때 정밀도 차이가 있기 때문에 데이터 손실
	unsigned int hp4 = hp; // 비트 단위로 보면 똑같은데, 분석하는 방법이 달라졌음



#pragma endregion


#pragma region 사칙 연산


	// 곱셈
	// - 오버플로우
	// int = int = int
	// 1231323 * 213124214124
	// 너무 크면 숫자 짤림

	// 나눗셈
	// - 0으로 나누기 조심
	// - 실수 관련
	// int / int = int
	// .xxx .뒤를 통채로 날려버림
	// 둘 중 하나를 실수로 만들어야 함.
	// int / float  or  float / int = float
	// 아니면 (float)로 캐스팅 해줄 것
	
	// int maxHp = 1000;
	// float ratio = hp / maxHp;
	// 실수로 maxHp를 설정안해놓으면 크래시가남



#pragma endregion

}


void Test()
{
  // hp의 범위는 Test(){} 내부
  int hp = 12;
}


