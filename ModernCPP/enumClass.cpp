#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// 오늘의 주제 : enum class

// unscoped enum (범위 없는)
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
	// 1) 이름공간 관리 (scoped)
	// 2) 암묵적인 변환 금지

	double value = PT_Knight;

}