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
#pragma region �� ����


	// ���� �ʿ��Ѱ�?
	// ex) ü���� 0�� �Ǹ� ���
	// ex) ü���� 30% �����̸� �ñر⸦ �ߵ�(100 * hp / maxHp)
	// ex) ����ġ�� 100 �̻��̸� ������
	// Ư�� ������ �۳� ũ���� ������ �ʿ���

	// a == b a�� b�� ���� ������?
	// ������ 1, �ٸ��� 0

	isSame = (a == b);

	// a != b : a�� b�� ���� �ٸ���?
	// �ٸ��� 1, ������ 0
	isDifferent = (a != b);

	// a > b : a�� b���� ū��
	// a >= b : a�� b���� ũ�ų� ������?

	isGreater = (a > b);
	

	// a < b : a�� b���� ������
	// a <= b : a�� b���� �۰ų� ������?

	isSmaller = (a < b);

	



#pragma endregion

#pragma region �� ����

	// ������
	// ���� �ʿ��Ѱ�? ���ǿ� ���� ���� ��� �ʿ��� ��
	// ex) �α����� �� ���̵� ���� AND ��й�ȣ�� ���ƾ� �Ѵ�.
	// ex) ��� �������̰ų� or ��� �����̸� ��� �ػ� ����

	// ! not
	// 0�̸� 1, �� �� 0

	test = !isSame; // ��ǻ� isDifferent�� �ǹ�


	// && AND
	// a && b -> �Ѵ� 1�̸� 1, �� �� 0
	test = (hp <= 0 && isinvincible == false); // ����

	// || OR
	// a || b -> ���� �ϳ��� 1�̸� 1, (�Ѵ� 0�̸� 0)

	test = (hp > 0 || isinvincible == true);
	!(hp <= 0 && isinvincible == false); // �����



#pragma endregion

}
