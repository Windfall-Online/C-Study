#include <iostream>
using namespace std;


int main()
{
	// while ~동안에
	// if-else 굉장히유용하다
	// 하지만 한 번만 실행하는게 아니라, 특정 조건까지 계속 반복해야 하는 상황
	// ex) 게임을 끌때까지 계속 게임을 실행해라
	// ex) 목적지에 도달할때까지 계속 이동하라

	// break; continue;
	// break의 범위는 중괄호 1쌍

	// 루프문의 흐름 제어 break continue
#pragma region while
	int count = 0;

	while (count < 5)
	{
		cout << "Hello World" << endl;

		count++;
		// 실수로 카운터의 변화를 주지 않았거나?
		// 카운터를 혹은 위에 놓는다거나
		// 코드가 길어지면 한눈에 안들어옴
	}

	// do while은 거의 안씀
	// 그러나 읽을 줄은 알아야 함.

	/*
	do
	{

	}while(false);

	*/
#pragma endregion

#pragma region for
	// for(초기식; 조건식; 제어식)
	// {}
	//		초기식		조건식	   제어식
	for (int count = 0; count < 5; count++)
	{

	}
#pragma endregion
	

	int round = 1;
	int hp = 100;
	int damage = 50;
	// 무한 루프 : 전투 시작
#pragma region 흐름제어
	while (true)
	{
		hp -= damage;
		if (hp < 0)
		{
			hp = 0;
			//음수 체력을 0으로 보정
		}

		// 시스템 메시지
		cout << "Round" << round << "몬스터 체력" << hp << endl;

		if (hp == 0)
		{
			cout << "몬스터 처치!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "제한 라운드 종료" << endl;
			break;
		}

		round++;


	}
#pragma endregion

	// 1 ~ 10 사이의 홀수만 출력하기

	for (int count = 1; count <= 10; count++)
	{
		bool isEven = (count % 2) == 0; // 2로 나누어서 나머지가 0이면 짝수
		
		if (isEven)
			continue; // 짝수는 continue로 스킵을 해버린다
					  // 원하지 않는 애들을 스킵 해버린다
		cout << count << endl;
	}


}

