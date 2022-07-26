#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// ������ ���� : auto

class Knight
{
public:
    int _hp;
};

template<typename T>
void Print(T t)
{
    cout << t << endl;
}


int main()
{
    /*int a = 3;
    float b = 3.14f;
    double c = 1.23;
    Knight d = Knight();
    const char* e = "lilac";*/

    auto a = 3;
    auto b = 3.14f;
    auto c = 1.23;
    auto d = Knight();
    auto e = "lilac";

    // auto �� ��Ŀ
    // ���� ���� (type deduction)
    // -> ���� �ǰ� �˾Ƽ� �� �������(�߷�)
    // �߷� ��Ģ�� �������� �������� �� �ִ�.

    auto f = &d;
    const auto test1 = b;

    auto* test2 = e;

    // ����!
    // �⺻ auto�� const, & ����!
    int& reference = a;
    const int cst = a;

    auto test1 = reference;
    auto test2 = cst;


    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    for (vector<int>::size_type i = 0; i < v.size(); i++)
    {
        int& data = v[i];
        data = 100;
    }

    // auto �������� ����








}

