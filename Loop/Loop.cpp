#include <iostream>
using namespace std;


int main()
{
	// while ~���ȿ�
	// if-else �����������ϴ�
	// ������ �� ���� �����ϴ°� �ƴ϶�, Ư�� ���Ǳ��� ��� �ݺ��ؾ� �ϴ� ��Ȳ
	// ex) ������ �������� ��� ������ �����ض�
	// ex) �������� �����Ҷ����� ��� �̵��϶�

	// break; continue;
	// break�� ������ �߰�ȣ 1��

	// �������� �帧 ���� break continue
#pragma region while
	int count = 0;

	while (count < 5)
	{
		cout << "Hello World" << endl;

		count++;
		// �Ǽ��� ī������ ��ȭ�� ���� �ʾҰų�?
		// ī���͸� Ȥ�� ���� ���´ٰų�
		// �ڵ尡 ������� �Ѵ��� �ȵ���
	}

	// do while�� ���� �Ⱦ�
	// �׷��� ���� ���� �˾ƾ� ��.

	/*
	do
	{

	}while(false);

	*/
#pragma endregion

#pragma region for
	// for(�ʱ��; ���ǽ�; �����)
	// {}
	//		�ʱ��		���ǽ�	   �����
	for (int count = 0; count < 5; count++)
	{

	}
#pragma endregion
	

	int round = 1;
	int hp = 100;
	int damage = 50;
	// ���� ���� : ���� ����
#pragma region �帧����
	while (true)
	{
		hp -= damage;
		if (hp < 0)
		{
			hp = 0;
			//���� ü���� 0���� ����
		}

		// �ý��� �޽���
		cout << "Round" << round << "���� ü��" << hp << endl;

		if (hp == 0)
		{
			cout << "���� óġ!" << endl;
			break;
		}

		if (round == 5)
		{
			cout << "���� ���� ����" << endl;
			break;
		}

		round++;


	}
#pragma endregion

	// 1 ~ 10 ������ Ȧ���� ����ϱ�

	for (int count = 1; count <= 10; count++)
	{
		bool isEven = (count % 2) == 0; // 2�� ����� �������� 0�̸� ¦��
		
		if (isEven)
			continue; // ¦���� continue�� ��ŵ�� �ع�����
					  // ������ �ʴ� �ֵ��� ��ŵ �ع�����
		cout << count << endl;
	}


}

