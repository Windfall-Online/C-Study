#include <iostream>
using namespace std;


// 오늘의 주제 : 함수 마무리
// 오버로딩 (중복 정의 : 함수 이름의 재사용)

// - 매개변수 갯수가 다르거나
// - 매개변수 타입이 다르거나 (순서가 다른걸 포함)

int Add(int a, int b)
{
    int result = a + b;
    return result;
}
// 매개변수를 똑같이 int로 2개받고  반환타입만 float로 바꿔치기하면
// 오류가난다 반환형식만으로는 구별할 수 없음.
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

// 기본 인자값
// 기본값을 세팅하는 인자는 맨 뒤로 와야한다.
void SetPlayerInfo(int hp, int mp, int attack, int guildid = 0)
{

}

// 스택 오버플로우

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

    // 5!(팩토리얼) = 5*4*3*2*1
    // 4! = 4*3*2*1


    // 1! = 1 1 * (0)
    int result2 = Factorial(5);
    cout << result2 << endl;
}

