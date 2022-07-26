#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

class Knight
{
public:
	Knight()
	{

	}
	~Knight()
	{

	}
	Knight(int a, int b)
	{
		cout << "Knight(int, int)" << endl;
	}
	Knight(initializer_list<int> list)
	{
		cout << "Knight(initializer_list)" << endl;
	}
};

int main()
{
	int a = 0;
	int b(0);
	int c{ 0 };

	Knight k1;
	Knight k2 = k1; //복사 생성자 [대입 연사자가 절대 아님]

	Knight k3{ k2 };

	vector<int> v3{ 1, 2, 3, 4 };

	// 중괄호 초기화
	// 1) vector 등 container와 잘 어울린다
	// 2) 축소 변환을 방지함
	int x = 0;
	//double y{ x };

	// 3) Bonus
	// 기본생성자 버전
	Knight k4{ };

	// 단점
	Knight k5{1, 2};
	// initializer_list가 최상위 생성자에있어서
	// int 2개를 받는 생성자를 씹어버림
	// 괄호 초기화 ()를 기본으로 간다
	// - 전통적인 C++ (거부감이 없음)
	// - vector 등 특이한 케이스에 대해서만 {}사용

	// 중괄호 초기화 {}를 기본으로 간다
	// - 초기화 문법의 일치화
	// - 축소 변환 방지
}