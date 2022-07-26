// CPP_Study(Logical).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int a = 1;
int b = 2;

bool isSame;
bool isDifferent;
bool isSmaller;
bool isGreater;
bool test;

int hp = 100;
bool isinvincible = true;


int main()
{
#pragma region 비교 연산


	// 언제 필요한가?
	// ex) 체력이 0이 되면 사망
	// ex) 체력이 30% 이하이면 궁극기를 발동(100 * hp / maxHp)
	// ex) 경험치가 100 이상이면 레벨업
	// 특정 값보다 작냐 크냐의 수단이 필요함

	// a == b a와 b의 값이 같은가?
	// 같으면 1, 다르면 0

	isSame = (a == b);

	// a != b : a와 b의 값이 다른가?
	// 다르면 1, 같으면 0
	isDifferent = (a != b);

	// a > b : a가 b보다 큰가
	// a >= b : a가 b보다 크거나 같은가?

	isGreater = (a > b);
	

	// a < b : a가 b보다 작은가
	// a <= b : a가 b보다 작거나 같은가?

	isSmaller = (a < b);

	



#pragma endregion

#pragma region 논리 연산

	// 논리연산
	// 언제 필요한가? 조건에 대해 논리적 사고가 필요할 때
	// ex) 로그인할 때 아이디도 같고 AND 비밀번호도 같아야 한다.
	// ex) 길드 마스터이거나 or 운영자 계정이면 길드 해산 가능

	// ! not
	// 0이면 1, 그 외 0

	test = !isSame; // 사실상 isDifferent의 의미


	// && AND
	// a && b -> 둘다 1이면 1, 그 외 0
	test = (hp <= 0 && isinvincible == false); // 죽음

	// || OR
	// a || b -> 둘중 하나만 1이면 1, (둘다 0이면 0)

	test = (hp > 0 || isinvincible == true);
	!(hp <= 0 && isinvincible == false); // 살았음



#pragma endregion

}
