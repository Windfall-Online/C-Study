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
	Knight k2 = k1; //���� ������ [���� �����ڰ� ���� �ƴ�]

	Knight k3{ k2 };

	vector<int> v3{ 1, 2, 3, 4 };

	// �߰�ȣ �ʱ�ȭ
	// 1) vector �� container�� �� ��︰��
	// 2) ��� ��ȯ�� ������
	int x = 0;
	//double y{ x };

	// 3) Bonus
	// �⺻������ ����
	Knight k4{ };

	// ����
	Knight k5{1, 2};
	// initializer_list�� �ֻ��� �����ڿ��־
	// int 2���� �޴� �����ڸ� �þ����
	// ��ȣ �ʱ�ȭ ()�� �⺻���� ����
	// - �������� C++ (�źΰ��� ����)
	// - vector �� Ư���� ���̽��� ���ؼ��� {}���

	// �߰�ȣ �ʱ�ȭ {}�� �⺻���� ����
	// - �ʱ�ȭ ������ ��ġȭ
	// - ��� ��ȯ ����
}