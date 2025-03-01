#include <iostream>
using namespace std;

// 오늘의 주제 : 타입 변환 (포인터)

class Item
{
public:
    Item()
    {
        cout << "Item()" << endl;
    }
    Item(const Item& item)
    {
        cout << "Item(const item&)" << endl;
    }

    ~Item()
    {
        cout << "~Item()" << endl;
    }


public:
    int _itemType = 0;
    int _itemDbId = 0;

    char _dummy[4096] = {};   // 이런 저런 정보들로 인해 비대해진
};

void TestItem(Item item)
{

}

void TestItemPtr(Item* item)
{

}

int main()
{
    // 복습
    {
        // Stack [ type(4) dbid(4) dummy(4096) ]
        Item item;


        // Stack [ 주소(4~8) ] -> Heap [ type(4) dbid(4) dummy(4096) ]
        Item* item2 = new Item();
        
        TestItem(item);
        TestItem(*item2);

        TestItemPtr(&item);
        TestItemPtr(item2);

        // 메모리 누수
        delete item2;


        // 배열
        {
            cout << "-------------------------------------" << endl;

            // 진짜 아이템이 100개 있는 것 (스택 메모리에 올라와 있는)
            Item item3[100] = {};

            cout << "-------------------------------------" << endl;

            // 아이템이 과연 100개가 있을까요?
            // 아이템을 가리키는 바구니가 100개, 실제 아이템은 1개도 없을 수도 있음
            Item* item4[100] = {};

            for (int i = 0; i < 100; i++)
            {
                item4[i] = new Item();
            }

            cout << "-------------------------------------" << endl;
            for (int i = 0; i < 100; i++)
            {
                delete item4[i];
            }
            cout << "-------------------------------------" << endl;

        }

    }
}
