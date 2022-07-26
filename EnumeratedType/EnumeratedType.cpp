#include <iostream>
using namespace std;


// 정수를 상수를 만드는 방법이 여러가지가 있음
// const int 는 상수인건 알겠는데 너무 따로 따로 노는 느낌이 든다?
// 하나의 셋트인데?

// 숫자를 지정 안하면 첫 값은 0부터 시작
// 그 다음 값들은 이전 값 + 1
enum ENUM_SRP      // 나중에 의미있는 이름으로 짓기 바람
{
    ENUM_SCISSORS, // = 0
    ENUM_ROCK,     // = 1
    ENUM_PAPER     // = 2
};  // 컴파일 단계에서 완벽하게 바꿔치기가 됨

// #이 붙은거 -> 전처리 지시문
// 1) 전처리 2) 컴파일 3) 링크
// #include <iostream> 컴파일 전에 iostream이라는 파일을 찾아서 해당 내요을 그냥 복붙해주세요!
#define DEFINE_SCISSORS 1
#define DEFINE_TEST cout << "Hello World" << endl;
// 어지간해선 사용 안함
// 다른걸 쓰다가 옵션이 없을 때 쓸 것
int main()
{
   
}

