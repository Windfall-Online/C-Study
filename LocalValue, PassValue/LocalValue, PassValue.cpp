#include <iostream>
using namespace std;


// ������ ���� : ���� ������ �� ����


// ���� ����
// ����) �ʱ�ȭ ����, const �� .rodata .data .bss

int globalValue = 0;


void Test()
{
	
	cout << "���� ������ ���� : " << globalValue << endl;
	globalValue++;
}

void increaseHp(int hp)
{
	hp = hp + 1;
	
}

int main()
{
	cout << "���� ������ ���� : " << globalValue << endl;
	globalValue++;

	Test();

	// ���� ����
	
	int hp = 1;

	cout << "increase ȣ�� �� : " << hp << endl;

	increaseHp(hp);

	cout << "increase ȣ�� �� : " << hp << endl;




}
