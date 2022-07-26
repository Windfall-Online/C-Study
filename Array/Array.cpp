// CPP_Study(Array).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// 문자, 문자열
// bool은 그냥 정수지만, 참/거짓을 나타내기 위해 사용
// char도 마찬가지 그냥 정수지만 '문자' 의미를 나타내기 위해 사용

// char : 알파벳 / 숫자 문자를 나타냄
// wchar_t : 유니코드 문자를 나타냄

// ASCII (American Standard Code for information interchange)


// 
char ch = 97;
char ch2 = 'a';
char ch3 = '1'; // 1이라는 문자의 아스키번호, 49번


// 국제화 시대에는 영어만으로 서비스 할 수 없음
// 전 세계 모든 문자에 대해 유일 코드를 부여한 것이 유니코드
// 참고)  유니코드에서 가장 많은 번호를 차지하는게 한국어/중국어 
// 유니코드는 표기 방식이 여러가지가 있는데 대표적으로 UTF8 UTF16

// UTF8
// - 알파벳, 숫자 1바이트(ASCII 동일한 번호)
// - 유럽 지역의 특유한 문자는 2바이트
// - 한글, 한자 등 3바이트

// UTF16
// - 알파벳, 숫자, 한글, 혼자 등 거의  대부분 문자 2바이트
// - 매~~우 예외적인 고대 문자만 4바이트 (사실상 무시해도 됨)

// 유니코드는 L 을 붙여준다

wchar_t wch = L'안';
// Oxc548로 해도 무방
// Escape Sequence
// 표기하기 애매한 애들을 표현
// \t = 아스키코드 9 = tab
// \n = 아스키코드 10 = LineFeed (한줄 아래로)
// \r = 아스키코드 13 = CarrigeReturn (커서 <<)
// \0 = 아스키코드 0 = NULL


// 엔터를 치면 \n\r
// 작은 따옴표 자체를 표현하고 싶음
// ''' 가아니라 '\'' 작은 따옴표를 표시하고 싶다



// 문자열
// 문자들이 열을 지어서 모여 있는 것 (문자 배열)
// 정수(1~8바이트) 고정 길이로
// Ex) Hello World 
// 길이자체가 가변적이다
// 문자 끝에는 반드시 \0 NULL 문자를 붙여야 끝으로 인정한다.

char str[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
char str2[] = "Hello World";
wchar_t str3[] = L"Hello World";
// 유니코드로 자동 변환

int main()
{

	

    cout << str << endl;




    cout << ch << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    // cout은 char 전용
    cout << wch << endl;
    wcout.imbue(locale("kor")); // 한글 인식을 못해서 이걸 추가해줘야함
    wcout << wch << endl;       // 유니코드는 wcout

    cout << '\'' << endl;

}
