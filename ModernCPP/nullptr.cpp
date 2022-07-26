#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// 오늘의 주제 : nullptr


class Knight
{
public:
	void Test()
	{

	}
};

Knight* FindKnight()
{
	return nullptr;
}

void Test(int a)
{
	cout << "Test(int)" << endl;
}


void Test(void* ptr)
{
	cout << "Test(*)" << endl;
}

// NullPtr 구현

class NullPtr
{
public:
	// 그 어떤 타입의 포인터와도 치환 가능
	template<typename T>
	operator T* ()const
	{
		return 0;
	}
	// 그 어떤 타입의 멤버 포인터와도 치환 가능
	template<typename C, typename T>
	operator T C::* ()const
	{
		return 0;
	}
private:
	void operator&() const; // 주소값 &을 막는다
};

const NullPtr _NullPtr;

int main()
{

	// 0 NULL

	int* ptr = NULL;

	// 1) 오동작 방지
	Test(0);
	Test(NULL);
	Test(nullptr);
	// 2) 가독성
	auto knight = FindKnight();
	if (knight == nullptr)
	{

	}

	//auto whoami = nullptr;

	void(Knight:: * memFunc)();
	memFunc = &Knight::Test;


}