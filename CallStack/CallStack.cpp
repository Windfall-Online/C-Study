#include <iostream>
using namespace std;

// ������ ���� : ȣ�� ����
// �������� �Ҷ� ������ �Ʒ��� ��
// Func1()�� ȣ���ϰ� Func2()�� ���� 
// �����Ϸ��� Func2()�� ���� ��

// �Լ� ����
// �����δ� ���ɾ��� �ñ״�ó�� ������ָ� �ȴ�
void Func1();
void Func2(int a, int b);
void Func3(float a);



int main()
{
    cout << "main" << endl;
    Func1();
}

void Func1()
{
	cout << "Func1" << endl;
	// Func2()�� ��ġ�� ������� ���� ���ǰ� �Ǿ����
	// ���빰�� �߿�ġ ����
	// push 2
	// push 1
	// call Func2

	Func2(1, 2);
}


void Func2(int a, int b)
{
	cout << "Func2" << endl;
	Func3(10.f);
}


void Func3(float damage)
{
	cout << "Func3" << endl;
}