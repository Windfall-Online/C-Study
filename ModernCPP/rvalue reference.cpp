#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;


// ������ ���� : ������(rvalue) ������ std::move

class Pet
{

};

class Knight
{
public:
	void PrintInfo() const
	{

	}

	Knight()
	{
		cout << "Knight()" << endl;
	}
	
	Knight(const Knight& knight)
	{
		cout << "const Knight()" << endl;
	}

	~Knight()
	{
		if (_pet)
			delete _pet;
	}
	// ���� ���� ������
	void operator=(const Knight& knight)
	{
		cout << "operator=(const Knight&)" << endl;

		// ���� ����
		_hp = knight._hp;
		if(knight._pet)
			_pet = new Pet(*knight._pet);


	}   
	// �̵� ������
	Knight(Knight&& knight)
	{

	}

	// �̵� ���� ������
	void operator=(Knight&& knight) noexcept
	{
		cout << "operator=(const Knight&)" << endl;

		// �̵� ���� �����ڸ� �̿��ϸ�
		// ���� ����ε� ���� ����
		_hp = knight._hp;
		_pet = knight._pet;

		knight._pet = nullptr;

	}

public:
	int _hp = 100;
	Pet* _pet = nullptr;
};

void TestKnight_Copy(Knight knight) { };

// �ӽð��� �ް� ���ĺ��� ��¥�� ���ư��Ŷ� �ȵ�
void TestKnight_LValueRef(Knight& knight) { };

// ���ư� ������ ��ĥ����� �׳� �б�����θ� Ȱ���� �� : ���������� ���
// read-only
void TestKnight_ConstLValueRef(const Knight& knight) { };
// ���������� �Լ� && ������ ������ �ƴ϶� �׳� �ϳ��� �����ؾ���
// �ް��� �ȵ�
// �̵� ���!!!
// �ų��� ����ϰ� ������ ���̻� ��� ����
void TestKnight_RvalueRef(Knight&& knight) { };

int main()
{

	// �ް�(lvalue) vs ������(rvalue)
	// - lvalue : ���Ͻ��� �Ѿ ��� ���ӵǴ� ��ü
	// - rvalue : lvalue�� �ƴ� ������ (�ӽ� ��, ������, ����, i++)��

	// int a = 3;

	Knight k1;
	TestKnight_Copy(k1);
	//TestKnight_LValueRef(Knight());
	TestKnight_ConstLValueRef(Knight());

	TestKnight_RvalueRef(Knight());
	
	TestKnight_RvalueRef(static_cast<Knight&&>(k1));


	Knight k2;
	k2._pet = new Pet();
	k2._hp = 1000;

	// ������ ������ �ȴ� << �� Hint�� �ִ� �ʿ� ������
	Knight k3;
	k3 = static_cast<Knight&&>(k2);
	k3 = std::move(k2); // ������ ������ ĳ����
	//std::move�� ���� �̸� �ĺ� �� �ϳ��� rvalue_cast

	// �� 1���� �����ؾ� �ϴ� ������
	std::unique_ptr<Knight> uptr = std::make_unique<Knight>();
	std::unique_ptr<Knight> uptr2 = std::move(uptr);



}