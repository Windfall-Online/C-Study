#include <iostream>
using namespace std;

//오늘의 주제 : 다중 포인터

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

    // msg[주소] << 8바이트(64-bit)
    const char* msg = "Hello";


    // Stack Frame : [매개변수][RET][지역변수(msg(Hello주소))][매개변수(a(Hello주소))][RET][지역변수]

    SetMessage(msg);
    //cout << msg << endl;

    // 주소2[] << 1바이트
    // 주소1[주소2] << 8바이트
    // pp[주소1] << 8바이트
    const char** pp = &msg;
    SetMessage(&msg);
    *pp = "Bye";
    cout << msg << endl;

    // 다중 포인터 = 양파까기
    // 오른쪽 -> 왼쪽으로 분석
    const char** pp2;

}

