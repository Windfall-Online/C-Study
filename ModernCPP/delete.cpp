#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// ������ ���� : delete (������ �Լ�)
// Ư�� ����� �������� �ʹ�

class Knight
{
public:

private:
	// �������� ���
	// ���ǵ��� ���� ����� �Լ�
	//void operator=(const Knight& k);
public:
	void operator=(const Knight& k) = delete;


	// ��� ���� �մ� â vs ��� ���� ���� ����
	// friend�� ������ ���谡 �߸��Ȱ���
	friend class Admin;
private:
	int _hp = 100;

};

class Admin
{
public:
	void CopyKnight(const Knight& k)
	{
		Knight k1;
		// ���� ����
		k1 = k;
	}
};

int main()
{
	Knight k1;

	Knight k2;

	// ���� �����ڸ� ����!!
	k1 = k2;
	Admin admin;
	admin.CopyKnight();

}