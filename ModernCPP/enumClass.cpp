#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// ������ ���� : enum class

// unscoped enum (���� ����)
enum PlayerType : char
{
	PT_Knight,
	PT_Archer,
	PT_Mage,
};

enum class ObjectType
{
	Player,
	Monster,
	Projecttile,
};

int main()
{
	// enum class
	// 1) �̸����� ���� (scoped)
	// 2) �Ϲ����� ��ȯ ����

	double value = PT_Knight;

}