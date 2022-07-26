#include <iostream>
using namespace std;

// 오늘의 주제 : 다중 포인터

void SetNumber(int* a)
{
    *a = 1;
}


int main()
{
    
    int a = 0;
    SetNumber(&a);
    cout << a << endl;

    const char* msg = "Hello";


}
