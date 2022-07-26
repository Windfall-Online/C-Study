#include <iostream>
using namespace std;

// 함수 : 프로시저, 메소드, 루틴


/*

input으로 무엇을 받고, output으로 무엇을 뱉을지 정해준다.

반환타입 함수이름([인자타입 매개변수])
{

   함수 내용

   return ---;

}


*/


// Hello World를 콘솔에 출력하는 함수를 만들어보자!
// input : 없음 / output : 없음
// 타입 int float double char ~~
// 없으면 void

void PrintHelloWorld()
{
    cout << "Hello World" << endl;
}

// 정수를 입력(함수) 받아서, 콘솔에 출력하는 함수를 만들어보자
// input : int // output : 없음

void PrintNumber(int value)
{
    cout << "넘겨주신 숫자는 " << value << "입니다" << endl;
}



// 2를 곱하는 함수를 만들어보자
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
