#include <iostream>
using namespace std;
// 주석달기
// Ctrl + K + C(Comment) Ctrl + K + U(UnComment) 단축키


/*

주석 여러줄

*/

// 프로그래밍
// 적절한 데이터를 저장하고 가공하는 것
// 데이터 + 로직

// 정수

// 변수 선언 방법
// [타입] [이름];
// [타입] [이름] = [초기값];

// 0이아닌 초기화 값이 있으면 .data영역

int hp = 100;

// 초기값이 0이거나, 초기값이 없는 변수라면 .bss 영역

char a;   // 1바이트 8비트  (-128 ~ 127)
short b;  // 2바이트 16비트 (-32768 ~ 32767)
int c;    // 4바이트 32비트 (-21.4억 ~ 21.4억)
__int64 d; // 8바이트 (long long) 64비트 (크다)

unsigned char ua;   // 1바이트 8비트  (0 ~ 255)
unsigned short ub;  // 2바이트 16비트 (0 ~ 65535)
unsigned int uc;    // 4바이트 32비트 (0 ~ 42.9억)
unsigned __int64 ud; // 8바이트 (long long) 64비트 (크다)

// 참고) 이론적으로 양수만 존재할 수 있는 데이터는 unsigned?
// unsigned를 사용할지 의견이 갈림

// -레벨이 음수인건 말이 안된다 -> 그럼 차라리 그 자리에서 프로그램을 크래시 내서 버그를 빨리 찾는게 낫다
// -unsigned / signed사이에 변환이 일어나게 되는데 버그가 일어날 수 있음.


// 귀찮은데 그냥 대충 4바이트로 가면 안될까?
// -> 콘솔/모바일 게임 -> 메모리가 늘 부족함
// -> 온라인 게임 -> 최적화 문제에 부딪힘

int main()
{
    // 정수의 오버플로우
    b = 32767;
    b = b + 1;
    // 자료형의 범위를 오인해서 나오는 사고
    // 수학이 맞다면 32768이 나와야함
    cout << b << endl; // -32768이 나와버림
    // 0111 1111 1111 1111 이 최대값이었는데
    // 1을 추가함으로써 1000 0000 0000 0000이 되므로 최솟값인 -32768이 나옴 
     
    // 정수의 언더플로우
    ub = 0;
    ub = ub - 1;
    cout << ub << endl; // 65535
    // 0000 0000 0000 0000에서 -1하면 1111 1111 1111 1111이 됨
    // 앞자리에서 2를 빌려와서 뺄셈 시전
    
    //cout << "체력이 " << hp << " 남았습니다\n";
    
}

