#include <iostream>
using namespace std;

// ������ ���� : ���� ������

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
