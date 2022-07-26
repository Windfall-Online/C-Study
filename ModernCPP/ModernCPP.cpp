#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// 오늘의 주제 : auto

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

    // auto 는 조커
    // 형식 연역 (type deduction)
    // -> 말이 되게 알아서 잘 맞춰놔라(추론)
    // 추론 규칙은 생각보다 복잡해질 수 있다.

    auto f = &d;
    const auto test1 = b;

    auto* test2 = e;

    // 주의!
    // 기본 auto는 const, & 무시!
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

    // auto 남발하지 말기








}

