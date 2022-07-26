#include <iostream>
#include "CPP_Study(Pointer vs Array).h"
using namespace std;


// 오늘의 주제 : 포인터 vs 배열
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
    
    // .data 영역
    // 주소[H][E][L][L][O][ ][W][O][R][L][D][\0]


    // test1[ 주소 ] << 4바이트 or 8바이트

    const char* test1 = "Hello World";
    // [][][][][][][][][][][][]
    // test2 = 주소
    char test2[] = "Hello CCC";
    
    char test3[] = { 'h','e','l','l','o' };

    // 포인터는 주소를 담는 바구니
    // 배열은 [닭장] 즉, 그 자체로 같은 데이터끼리 붙어있는 '바구니 모음'
    // -다만 [배열 이름]은 '바구니 모음'의 [시작 주소]

    // 배열을 함수의 인자로 넘기게 되면?

    // int a = 0;
    
    // 복사 방식으로 전달하기 때문에 아무런 영향이 없음
    // [매개변수][RET][지역변수(a = 0)] [매개변수(a = 1)][RET][지역변수]
    // Test(a);
    // cout << a << endl;


    // Test2(test2);
    // cout << test2 << endl;


}

