#include <iostream>
using namespace std;


// ������ ���� : �Լ� ������
// �����ε� (�ߺ� ���� : �Լ� �̸��� ����)

// - �Ű����� ������ �ٸ��ų�
// - �Ű����� Ÿ���� �ٸ��ų� (������ �ٸ��� ����)

int Add(int a, int b)
{
    int result = a + b;
    return result;
}
// �Ű������� �Ȱ��� int�� 2���ް�  ��ȯŸ�Ը� float�� �ٲ�ġ���ϸ�
// ���������� ��ȯ���ĸ����δ� ������ �� ����.
float Add(float a, float b)
{
    float result = a + b;
    return result;
}

int Add(int a)
{
    int result = a + 1;
    return result;
}

// �⺻ ���ڰ�
// �⺻���� �����ϴ� ���ڴ� �� �ڷ� �;��Ѵ�.
void SetPlayerInfo(int hp, int mp, int attack, int guildid = 0)
{

}

// ���� �����÷ο�

int Factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);

}


int main()
{
    int result = Add(1, 2);

    // 5!(���丮��) = 5*4*3*2*1
    // 4! = 4*3*2*1


    // 1! = 1 1 * (0)
    int result2 = Factorial(5);
    cout << result2 << endl;
}

