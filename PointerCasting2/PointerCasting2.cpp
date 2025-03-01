#include <iostream>
using namespace std;

// 오늘의 주제 : 타입 변환(포인터)

class Knight
{
public:
    int _hp = 0;
};

class Item
{
public:
    Item()
    {
        cout << "Item()" << endl;
    }

    Item(int itemType) : _itemType(itemType)
    {
        cout << "Item(int itemType)" << endl;
    }

    Item(const Item& item)
    {
        cout << "Item(const item&)" << endl;
    }


    virtual ~Item()
    {
        cout << "~Item()" << endl;
    }

    void Test()
    {
        cout << "Test Item()" << endl;
    }
public:
    int _itemType = 0;
    int _itemDbId = 0;

    char _dummy[4096] = {};

};

enum ItemType
{
    IT_WEAPON = 1,
    IT_ARMOR = 2,
};

class Weapon : public Item
{
public:
    Weapon() : Item(IT_WEAPON), _damage(rand() % 100)
    {
        cout << "Weapon()" << endl;
        
    }
    virtual ~Weapon()
    {
        cout << "~Weapon()" << endl;
    }
	void Test()
	{
		cout << "Test Weapon()" << endl;
	}
  
public:
    int _damage = 0;
};

class Armor : public Item
{
public:
    Armor() : Item(IT_ARMOR)
    {
        cout << "Armor()" << endl;
    }
    virtual ~Armor()
    {
        cout << "~Armor()" << endl;
    }
public:
    int _defence = 0;
};

void TestItem(Item item)
{

}

void TestItemPtr(Item* item)
{
    item->Test();
}


int main()
{
    // 연관성이 없는 클래스 사이의 포인터 변환 테스트
    {
        // Stack [ 주소 ] -> Heap [_hp(4)]
        Knight* knight = new Knight();

        // 암시적으로는 NO
        // 명시적으로는 OK

        // Stack[ 주소 ]
		//Item* item = (Item*)knight;
		//item->_itemType = 2;
		//item->_itemDbId = 1;

        delete knight;

    }
   
    
	// 부모 -> 자식 변환 테스트
	{
        Item* item = new Item();

        //[ [ Item ] ]
        //[ _damage  ]
        //Weapon* weapon = (Weapon*)item;
        //weapon->_damage = 10;
        delete item;
        // 잘못된 메모리를 건드릴 수 있어서 매우 위험함
	}
    
    // 자식 -> 부모 변환 테스트
    {

		//[ [ Item ] ]
		//[ _damage  ]
        Weapon* weapon = new Weapon();
      
        // 암시적으로도 된다!!
        Item* item = weapon;
        TestItemPtr(item);
        delete weapon;
    }

    // 명시적으로 타입 변환할 때는 항상 항상 조심해야 한다!
    // 암시적으로 될 때는 안전하다?
    // -> 평생 명시적으로 타입 변환(캐스팅)은 안 하면 되는거 아닌가?
    

    Item* inventory[20] = {};

    srand((unsigned int)time(nullptr));
    for (int i = 0; i < 20; i++)
    {
        int randValue = rand() & 2; // 0~1
        switch (randValue)
        {
        case 0:
            inventory[i] = new Weapon();
            cout << "웨폰 생성" << endl;
            break;
        case 1:
            inventory[i] = new Armor();
            cout << "아머 생성" << endl;
            break;
        }

    }
    cout << "------------------------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        Item* item = inventory[i];
        if (item == nullptr)
            continue;
        if (item->_itemType == IT_WEAPON)
        {
            Weapon* weapon = (Weapon*)item;
            cout << "Weapon Damage : " << weapon->_damage << endl;
        }
    }

    // **************************** 매우 매우 매우 중요 ****************************
    

	for (int i = 0; i < 20; i++)
	{
		Item* item = inventory[i];
		if (item == nullptr)
			continue;

		//if (item->_itemType == IT_WEAPON)
		//{
		//    Weapon* weapon = (Weapon*)item;
		//    delete weapon;
		//}
		//else
		//{
		//    Armor* armor = (Armor*)item;
		//    delete armor;
		//}
        // 소멸자를 virtual 로 만들면 굳이 원본을 찾아서 없애주지 않아도 된다
        delete item;
	}


    // 결론
    // - 포인터 vs 일반 타입 : 차이를 이해하자
    // - 포인터 사이의 타입 변환(캐스팅)을 할 때는 매우 매우 조심해야 한다.
    // - 부모-자식 관계에서 부모 클래스의 소멸자에는 까먹지 말고 virtual을 붙이자!!!!!



}

