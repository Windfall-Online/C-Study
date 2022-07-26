#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// ������ ���� : ����(lamda)

// �Լ� ��ü�� ������ ����� ����

enum class ItemType
{
	None,
	Armor,
	Weapon,
	Jewelry,
	Consumable,
};

enum class Rarity
{
	Common,
	Rare,
	Unique,
};

class Item
{
public:
	Item() {}
	Item(int itemId, Rarity rarity, ItemType type)
		:_itemId(itemId), _rarity(rarity), _type(type)
	{

	}

public:
	int _itemId = 0;
	Rarity _rarity = Rarity::Common;
	ItemType _type = ItemType::None;
};


int main()
{
	vector<Item> v;
	v.push_back(Item(1, Rarity::Common, ItemType::Weapon));


}