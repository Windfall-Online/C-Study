#include <iostream>
using namespace std;

// ������ ���� : �����ڿ� �Ҹ���

// [������ (Constructor)�� �Ҹ���(Destructor)]
// �����ڴ� ������ �Ҹ��ڴ� 1��
// ���۰� ���� �˸�

// [�Ͻ���(Implicit) ������]
// �����ڸ� ��������� ������ ������.
// �ƹ� ���ڵ� ���� �ʴ� [�⺻ ������]�� �����Ϸ��� ���� �ڵ����� �������
// -> �׷��� �츮�� �����(Explicit)���� �ƹ� ������ �ϳ� �����,
// �ڵ����� ��������� [�⺻ ������]�� �� �̻� ��������� ����!
class Knight
{
public:


    // [1] �⺻ ������(���ڰ� ����)
    Knight()
    {
        cout << "Knight()�⺻ ������ ȣ��" << endl;
        _hp = 100;
        _attack = 10;
        _posX = 0;
        _posY = 0;
    }

    // [2] ���� ������ �ڱ� �ڽ��� Ŭ���� ���� Ÿ���� ���ڷ� ����
    // �Ϲ������� '�Ȱ���' �����͸� ���� ��ü�� �����Ǳ� ����Ѵ�.

    Knight(const Knight& knight)
    {
        _hp = knight._hp;
        _attack = knight._attack;
        _posX = knight._posX;
        _posY = knight._posY;
    }


    // [3] ��Ÿ ������ �߿��� ���ڸ� 1���� �޴� [��Ÿ ������]��
    // [Ÿ�� ��ȯ ������]��� �θ��⵵ ��

    // ������� �뵵�θ� ����� ��!!
    // Ű���� explicit
    explicit Knight(int hp)
    {
        cout << "knight(int) ������ ȣ��" << endl;
        _hp = hp;
        _attack = 10;
        _posX = 0;
        _posY = 0;
    }

	Knight(int hp, int attack, int posX, int posY)
	{
		cout << "Knight(int) ������ ȣ��" << endl;

		_hp = hp;
        _attack = attack;
		_posX = posX;
		_posY = posY;
	}
    ~Knight()
    {
        cout << "Knight() �Ҹ��� ȣ��" << endl;
    }

    void Move(int y, int x);
    void Attack();
    void Die()
    {
        _hp = 0;
        cout << "Die" << endl;
    };
public:
    int _hp;
    int _attack;
    int _posY;
    int _posX;
    
};

void Knight::Move(int y, int x)
{
    _posY = y;
    _posX = x;
    cout << "Move" << endl;

}

void Knight::Attack()
{
    cout << "Attack" << endl;
}

void HelloKnight(Knight k)
{
    cout << "Hello Knight" << endl;
}

int main()
{
    
    Knight k1(100);
    
    Knight k2(k1);  // ���� ������
    Knight k3 = k1; // ���� ������

    Knight k4; // ������
    k4 = k1;   // ����


    // �Ͻ��� ����ȯ -> �����Ϸ��� �˾Ƽ� �ٱ�ġ��
    int num = 1;
    
    float f = (float)num; // ����� < �츮�� �ڵ�� num�� float �ٱ��Ͽ� ������� �ֹ�
    double d = num; // �Ͻ��� < ���� ���ߴµ� �����Ϸ��� �˾Ƽ� ó���ϰ� ����.
    
    // ��������� ���
    // �����Ϸ��� �˾Ƽ� �ٲ�ġ���ϴ°� ����
    Knight k5;
    k5 = (Knight)1;
    
    HelloKnight((Knight)5);
    

    


}


