#include <iostream>
using namespace std;

// �Լ� : ���ν���, �޼ҵ�, ��ƾ


/*

input���� ������ �ް�, output���� ������ ������ �����ش�.

��ȯŸ�� �Լ��̸�([����Ÿ�� �Ű�����])
{

   �Լ� ����

   return ---;

}


*/


// Hello World�� �ֿܼ� ����ϴ� �Լ��� ������!
// input : ���� / output : ����
// Ÿ�� int float double char ~~
// ������ void

void PrintHelloWorld()
{
    cout << "Hello World" << endl;
}

// ������ �Է�(�Լ�) �޾Ƽ�, �ֿܼ� ����ϴ� �Լ��� ������
// input : int // output : ����

void PrintNumber(int value)
{
    cout << "�Ѱ��ֽ� ���ڴ� " << value << "�Դϴ�" << endl;
}



// 2�� ���ϴ� �Լ��� ������
// input : int / output : int

int MultiplyBy2(int value)
{
    int b = value * 2;
    return b;
}

int main()
{
    int result = MultiplyBy2(3);

    PrintHelloWorld();
    PrintNumber(result);



}
