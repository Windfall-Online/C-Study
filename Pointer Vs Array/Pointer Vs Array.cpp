#include <iostream>
#include "CPP_Study(Pointer vs Array).h"
using namespace std;


// ������ ���� : ������ vs �迭
void Test(int value1)
{
    value1++;
}

void Test2(char a[])
{
    a[0] = 'x';
}

int main()
{   
    
    // .data ����
    // �ּ�[H][E][L][L][O][ ][W][O][R][L][D][\0]


    // test1[ �ּ� ] << 4����Ʈ or 8����Ʈ

    const char* test1 = "Hello World";
    // [][][][][][][][][][][][]
    // test2 = �ּ�
    char test2[] = "Hello CCC";
    
    char test3[] = { 'h','e','l','l','o' };

    // �����ʹ� �ּҸ� ��� �ٱ���
    // �迭�� [����] ��, �� ��ü�� ���� �����ͳ��� �پ��ִ� '�ٱ��� ����'
    // -�ٸ� [�迭 �̸�]�� '�ٱ��� ����'�� [���� �ּ�]

    // �迭�� �Լ��� ���ڷ� �ѱ�� �Ǹ�?

    // int a = 0;
    
    // ���� ������� �����ϱ� ������ �ƹ��� ������ ����
    // [�Ű�����][RET][��������(a = 0)] [�Ű�����(a = 1)][RET][��������]
    // Test(a);
    // cout << a << endl;


    // Test2(test2);
    // cout << test2 << endl;


}

