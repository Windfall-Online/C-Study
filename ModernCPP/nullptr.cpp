#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// ������ ���� : nullptr


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

// NullPtr ����

class NullPtr
{
public:
	// �� � Ÿ���� �����Ϳ͵� ġȯ ����
	template<typename T>
	operator T* ()const
	{
		return 0;
	}
	// �� � Ÿ���� ��� �����Ϳ͵� ġȯ ����
	template<typename C, typename T>
	operator T C::* ()const
	{
		return 0;
	}
private:
	void operator&() const; // �ּҰ� &�� ���´�
};

const NullPtr _NullPtr;

int main()
{

	// 0 NULL

	int* ptr = NULL;

	// 1) ������ ����
	Test(0);
	Test(NULL);
	Test(nullptr);
	// 2) ������
	auto knight = FindKnight();
	if (knight == nullptr)
	{

	}

	//auto whoami = nullptr;

	void(Knight:: * memFunc)();
	memFunc = &Knight::Test;


}