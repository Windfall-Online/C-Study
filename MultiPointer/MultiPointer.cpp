#include <iostream>
using namespace std;

//������ ���� : ���� ������

void SetNumber(int* a)
{
    *a = 1;
}

void SetMessage(const char* a)
{
    
}
void SetMessage(const char** a)
{
    *a = "Bye";
}

int main()
{
    int a = 0;
    SetNumber(&a);
    cout << a << endl;

    // .rdata[H][e][l][l][o][\0]

    // msg[�ּ�] << 8����Ʈ(64-bit)
    const char* msg = "Hello";


    // Stack Frame : [�Ű�����][RET][��������(msg(Hello�ּ�))][�Ű�����(a(Hello�ּ�))][RET][��������]

    SetMessage(msg);
    //cout << msg << endl;

    // �ּ�2[] << 1����Ʈ
    // �ּ�1[�ּ�2] << 8����Ʈ
    // pp[�ּ�1] << 8����Ʈ
    const char** pp = &msg;
    SetMessage(&msg);
    *pp = "Bye";
    cout << msg << endl;

    // ���� ������ = ���ı��
    // ������ -> �������� �м�
    const char** pp2;

}

