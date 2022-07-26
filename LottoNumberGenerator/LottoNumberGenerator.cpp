#include <iostream>
using namespace std;


// �ζ� ��ȣ ������ �����

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
		// i��° ���� ���� ���� �ĺ���� ����
		int best = i;

		for (int j = i + 1; j < count; j++)
		{
			// �ٸ� �ĺ��� �񱳸� ���� ���� ���� �ĺ��� ã�Ƴ�����
			if (numbers[j] < numbers[best])
			{
				best = j;
			}
		}
		// ���� ���� �ĺ��� ��ü�ϴ� ����
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

		// �̹� ã�� ������?
		bool found = false;

		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == randValue)
			{
				// �̹� ã�� ��
				found = true;
				break;
			}

		}

		// �� ã������ �߰�!
		if (found == false)
		{
			numbers[count] = randValue;
			count++;
		}
	}
	
	// TODO : �������� 1 ~ 45 ������ ���� 6���� ����ּ���! (��, �ߺ��� �������)
	Sort(numbers, 6);
}

int main()
{
	// 1) Swap �Լ� �����
	int a = 1;
	int b = 2;
	Swap(a, b);

	// 2) ���� �Լ� ����� (���� ���ڰ� ���� ������ ����)
	int numbers[6] = {};
	// Sort(numbers, sizeof(numbers) / sizeof(int));

	
	// 3) ���������� �ζ� ��ȣ ������

	ChooseLotto(numbers);
	cout << "�ζ� ��ȣ : ";
	for (int i = 0; i < 6; i++)
	{
		cout << numbers[i] << " ";
	}

}
