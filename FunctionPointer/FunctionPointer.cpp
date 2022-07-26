#include <iostream>
using namespace std;

// 오늘의 주제 : 함수 포인터

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
	int _itemId;  // 아이템을 구분하기 위한 ID
	int _rarity;  // 희귀도
	int _ownerId; // 소지자 ID
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

	// 바구니 주소
	// pointer[ 주소 ] -> 주소 [     ]

	typedef int DATA;

	// 1) 포인터	*
	// 2) 변수이름  pointer
	// 3) 데이터 타입 int

	DATA* pointer = &a;
	
	// 함수
	typedef int(FUNC_TYPE)(int, int);	
	// Modern CPP에서는
	// using FUNC_TYPE = int(int a, int b); 라고도 씀
	

	// 1) 포인터	  *
	// 2) 변수이름	  fn
	// 3) 데이터 타입 함수 (int(int a, int b))모양
	FUNC_TYPE* fn;

	// 타입이 일치해야 한다는 제약 사항이 있긴함.
	fn = Add;

	// Add대신 fn이라는 바구니로 함수 호출
	int result = fn(1, 2);		// 기본 문법
	cout << result << endl;

	//int result = (*fn)(1, 2);	// 함수 포인터는 *(접근 연산자) 붙어도 함수 주소!
	//cout << result << endl;

	Item items[10] = {};
	items[3]._rarity = 2;
	Item* rareITem = FindItem(items, 10, IsRareItem);

}

