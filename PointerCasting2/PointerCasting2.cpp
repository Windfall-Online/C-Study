#include <iostream>
using namespace std;

// ������ ���� : Ÿ�� ��ȯ(������)

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
    // �������� ���� Ŭ���� ������ ������ ��ȯ �׽�Ʈ
    {
        // Stack [ �ּ� ] -> Heap [_hp(4)]
        Knight* knight = new Knight();

        // �Ͻ������δ� NO
        // ��������δ� OK

        // Stack[ �ּ� ]
		//Item* item = (Item*)knight;
		//item->_itemType = 2;
		//item->_itemDbId = 1;

        delete knight;

    }
   
    
	// �θ� -> �ڽ� ��ȯ �׽�Ʈ
	{
        Item* item = new Item();

        //[ [ Item ] ]
        //[ _damage  ]
        //Weapon* weapon = (Weapon*)item;
        //weapon->_damage = 10;
        delete item;
        // �߸��� �޸𸮸� �ǵ帱 �� �־ �ſ� ������
	}
    
    // �ڽ� -> �θ� ��ȯ �׽�Ʈ
    {

		//[ [ Item ] ]
		//[ _damage  ]
        Weapon* weapon = new Weapon();
      
        // �Ͻ������ε� �ȴ�!!
        Item* item = weapon;
        TestItemPtr(item);
        delete weapon;
    }

    // ��������� Ÿ�� ��ȯ�� ���� �׻� �׻� �����ؾ� �Ѵ�!
    // �Ͻ������� �� ���� �����ϴ�?
    // -> ��� ��������� Ÿ�� ��ȯ(ĳ����)�� �� �ϸ� �Ǵ°� �ƴѰ�?
    

    Item* inventory[20] = {};

    srand((unsigned int)time(nullptr));
    for (int i = 0; i < 20; i++)
    {
        int randValue = rand() & 2; // 0~1
        switch (randValue)
        {
        case 0:
            inventory[i] = new Weapon();
            cout << "���� ����" << endl;
            break;
        case 1:
            inventory[i] = new Armor();
            cout << "�Ƹ� ����" << endl;
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

    // **************************** �ſ� �ſ� �ſ� �߿� ****************************
    

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
        // �Ҹ��ڸ� virtual �� ����� ���� ������ ã�Ƽ� �������� �ʾƵ� �ȴ�
        delete item;
	}


    // ���
    // - ������ vs �Ϲ� Ÿ�� : ���̸� ��������
    // - ������ ������ Ÿ�� ��ȯ(ĳ����)�� �� ���� �ſ� �ſ� �����ؾ� �Ѵ�.
    // - �θ�-�ڽ� ���迡�� �θ� Ŭ������ �Ҹ��ڿ��� ����� ���� virtual�� ������!!!!!



}

