#include <iostream>
using namespace std;


// 로또 번호 생성기 만들기

int Swap(int& value1, int& value2)
{
	int temp;
	temp = value1;
	value1 = value2;
	value2 = temp;

	return value1, value2;
}

void Sort(int numbers[], int count)
{
	for (int i = 0; i < count; i++)
	{
		// i번째 값이 제일 좋은 후보라고 가정
		int best = i;

		for (int j = i + 1; j < count; j++)
		{
			// 다른 후보와 비교를 통해 제일 좋은 후보를 찾아나선다
			if (numbers[j] < numbers[best])
			{
				best = j;
			}
		}
		// 제일 좋은 후보와 교체하는 과정
		if (i != best)
		{
			Swap(numbers[i], numbers[best]);
		}
	}
}

void ChooseLotto(int numbers[])
{
	srand((unsigned)time(NULL));

	int count = 0;
	while (count != 6)
	{
		int randValue = 1 + (rand() % 45);

		// 이미 찾은 값인지?
		bool found = false;

		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == randValue)
			{
				// 이미 찾은 값
				found = true;
				break;
			}

		}

		// 못 찾았으면 추가!
		if (found == false)
		{
			numbers[count] = randValue;
			count++;
		}
	}
	
	// TODO : 랜덤으로 1 ~ 45 사이의 숫자 6개를 골라주세요! (단, 중복이 없어야함)
	Sort(numbers, 6);
}

int main()
{
	// 1) Swap 함수 만들기
	int a = 1;
	int b = 2;
	Swap(a, b);

	// 2) 정렬 함수 만들기 (작은 숫자가 먼저 오도록 정렬)
	int numbers[6] = {};
	// Sort(numbers, sizeof(numbers) / sizeof(int));

	
	// 3) 최종적으로 로또 번호 생성기

	ChooseLotto(numbers);
	cout << "로또 번호 : ";
	for (int i = 0; i < 6; i++)
	{
		cout << numbers[i] << " ";
	}

}
