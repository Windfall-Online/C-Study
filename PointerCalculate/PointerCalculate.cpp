#include <iostream>
using namespace std;


// 오늘의 주제 : 포인터 연산
// 1) 주소 연산자 (&)
// 2) 산술 연산자 (+, -)
// 3) 간접 연산자 (*)
// 4) 간접 멤버 연산자

struct PlayerInfo 
{
	int	hp;		// +0 정확한 위치에 hp를 사용
	int damage; // +4 위치에 damage를 사용
};


int main()
{
	int number = 1;

	// 1) 주소 연산자 (&) 
	// - 해당 변수의 주소를 알려주세요~
	// 주소를 담는 바구니 pointer 안에 number의 주소를 넣어주세요
	// number가 int형이라서 pointer도 int형이어야 한다.
	int* pointer = &number; // number의 주소안에 1이들어가있다.

	
	// 2) 산술 연산자 (+, -)
	number = number + 1;    // number의 주소안에 값이 1증가함 


	// int*
	// - * : 포인터 타입이다(8바이트 or 4바이트 주소를 담는 바구니)
	// - int : 주소를 따라가면 int(4바이트 정수형 바구니)가 있다고 가정해라!!

	// [!]  포인터에서 + 나 -등 산술 연산으로 1을 더하거나 빼면 
	// 정말 '그 숫자' 를 더하고 빼라는 의미가 아니다.
	// 한번에 TYPE의 크기만큼 이동하라!

	pointer += 1;			// pointer 안에있는 값의 주소가 1증가할줄 알았는데 4가증가해버림(?)
							// TYPE * 숫자가 곱해짐
							// ex) int = 4 * X , double = 8 * X
	pointer += 2;           // 8증가함(TYPE이 int라는 가정하에)

    // number += number;
	// number++;


	// 3) 간접 연산자 (*)
	// - 포탈을 타고 해당 주소로 슝~~~~~
	*pointer = 3;
	// pointer가 가리키는 주소에 들어가서~ 3을 저장하라
	// 즉 number = 3과같다.
	// 물론 저위에 pointer += 이런것들이 없어야함

	PlayerInfo player;
	player.hp = 10;
	player.damage = 100;

	PlayerInfo* playerPtr = &player;

	// player.
	(*playerPtr).hp = 200;		// playerPtr의 주소로 이동하고 +0을한 주소에 200을 넣어주고
	(*playerPtr).damage = 200;  // playerPtr의 주소로 이동하고 +4를한 주소에 200을 넣어줌
	

	// 4) 간접 멤버 연산자 (->)
	// * 간접 연산자 (포탈 타고 해동 주소로 GOGO)
	// . 구조체의 특정 멤버를 다룰 때 사용 (어셈블리 언어로 까보면 . 사실상 그냥 덧셈)
	// -> 는 *와 .을 한방에

	playerPtr->damage = 1000;


}

