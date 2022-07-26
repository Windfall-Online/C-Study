#include <iostream>
using namespace std;

// ������ ���� : ���ø� ����

// typename T�� ���̸� '��Ŀī��' (� Ÿ�Ե� �� ���� �� ����)
// �׷��� ������ typename�� �ٿ��� �ϴ� ���� �ƴϴ�
// template<>�ȿ� ���°� [������ �ϴ� ���]�̶�� �� �� ����

template<typename T, int SIZE = 10>
class RandomBox
{
public:
    T GetRandomData()
    {
        int idx = rand() % SIZE;
        return _data[idx];
    }

public:
    T _data[SIZE];
};

// ���ø� Ư��ȭ
template<int SIZE>
class RandomBox<double, SIZE>
{
public:
	double GetRandomData()
	{
		int idx = rand() % SIZE;
		return _data[idx];
	}

public:
	double _data[SIZE];
};

void Hello(int number)
{

}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    // ���ø� : �Լ��� Ŭ������ ���� Ʋ
    // 1) �Լ� ���ø�
    // 2) Ŭ���� ���ø�

    RandomBox<int, 10> rb1;

    for (int i = 0; i < 10; i++)
    {
        rb1._data[i] = i;
    }
	RandomBox<double, 20> rb2;

    int value1 = rb1.GetRandomData();
    cout << value1 << endl;

	for (int i = 0; i < 20; i++)
	{
        rb2._data[i] = i + 0.5;
	}
    int value2 = rb2.GetRandomData();
    cout << value2 << endl;
    
    

}

