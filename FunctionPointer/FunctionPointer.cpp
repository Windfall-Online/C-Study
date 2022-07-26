#include <iostream>
using namespace std;

// ������ ���� : �Լ� ������

int Add(int a, int b)
{
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}


class Item
{
public:
	Item() : _itemId(0), _rarity(0), _ownerId(0)
	{

	}
public:
	int _itemId;  // �������� �����ϱ� ���� ID
	int _rarity;  // ��͵�
	int _ownerId; // ������ ID
};
typedef bool(ITEM_SELECTOR)(Item* item);

Item* FindItemByRarity(Item items[], int itemCount, int rarity)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];

		if (item->_rarity = rarity)
		{
			return item;
		}

	}
	return nullptr;
}

Item* FindItemByItemId(Item items[], int itemCount, int itemId)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		
		if (item->_itemId = itemId)
		{
			return item;
		}
		
	}
	return nullptr;
}



Item* FindItem(Item items[], int itemCount, ITEM_SELECTOR* selector)
{
	for (int i = 0; i < itemCount; i++)
	{
		Item* item = &items[i];
		if (selector(item))
			return item;
	}
	return nullptr;
}

bool IsRareItem(Item* item)
{
	return item->_rarity >= 2;
}

bool IsOwnerItem(Item* item, int ownerId)
{
	return item->_ownerId == ownerId;
}

int main()
{
	int a = 10;

	// �ٱ��� �ּ�
	// pointer[ �ּ� ] -> �ּ� [     ]

	typedef int DATA;

	// 1) ������	*
	// 2) �����̸�  pointer
	// 3) ������ Ÿ�� int

	DATA* pointer = &a;
	
	// �Լ�
	typedef int(FUNC_TYPE)(int, int);	
	// Modern CPP������
	// using FUNC_TYPE = int(int a, int b); ��� ��
	

	// 1) ������	  *
	// 2) �����̸�	  fn
	// 3) ������ Ÿ�� �Լ� (int(int a, int b))���
	FUNC_TYPE* fn;

	// Ÿ���� ��ġ�ؾ� �Ѵٴ� ���� ������ �ֱ���.
	fn = Add;

	// Add��� fn�̶�� �ٱ��Ϸ� �Լ� ȣ��
	int result = fn(1, 2);		// �⺻ ����
	cout << result << endl;

	//int result = (*fn)(1, 2);	// �Լ� �����ʹ� *(���� ������) �پ �Լ� �ּ�!
	//cout << result << endl;

	Item items[10] = {};
	items[3]._rarity = 2;
	Item* rareITem = FindItem(items, 10, IsRareItem);

}

