#include <iostream>
using namespace std;

// ������ ���� : ���м�

// ��ü���� ( OOP Object Oriented Programming)
// - ��Ӽ�
// - ���м� = ĸ��ȭ
// - ������ 

// ���м�(Date Hiding) = ĸ��ȭ(Encapsulation)
// ���� �Ǵ� ���� ����ϰ� ����ڴ�!
// ����� ����?
// - 1) ���� �����ϰ� �ǵ帮�� �ȵǴ� ���
// - 2) �ٸ� ��η� �����ϱ� ���ϴ� ���


// �Ϲ� ������ ���忡�� ����ϴ� ��?
// - �ڵ�/���/��
// ���� �Ǵ� �κ� (������ �ǵ帮�� ū�ϳ�)
// - ����, ���� ���⼱


// public(����), protected(��ȣ), private(����)
// - public : �������׳� ����, ���� ���
// - protected : ���� �ڼյ����׸� ���
// - private : ���� ����Ҳ�! << class Car ���ο�����


// ��� ���� ������ : ���� �������� �θ���� ������ ��� ��������?
// �θ������ �������� ������ �� ���� �ڼյ����׵� �Ȱ��� ������� ���� ����
// - public : ������ ���? �θ� Ŭ������ ���� �״��~(public -> public, protected -> protected)
// - protected : ��ȣ���� ���? �� �ڼյ����׸� �����ٰž�(public -> protected, protected -> protected)
// - private : �������� ���?(public -> private, protected -> private)

class Car
{
public:
    void MoveHandle() {}
    void PushPedal() {}
    void OpenDoor() {}
    void TurnKey()
    {
        RunEngine();
    }
protected:
    void DisassembleCar() {} // ���� �����Ѵ�
    void RunEngine() {} // ������ ������Ų��
    void ConnectCircuit() {} // ���⼱ ����
public:
	// �ڵ���
    // - �ڵ�
    // - ���
    // - ����
    // - ��
    // - ���� ���⼱

};

class SuperCar : private Car // ��� ���� ������
{
public:
    void PushRemoteController()
    {
        RunEngine();
    }
};

class TestSuperCar : private SuperCar
{
public:
    void Test()
    {
        
    }
};

// 'ĸ��ȭ'
// ������ �����Ϳ� �Լ��� �������� ���� ��

class Berserker
{
public:

    // ��� : ü���� 50 ���Ϸ� �������� ����Ŀ ��尡 �ߵ� (������)
    int GetHp() { return _hp; }
    void SetHp(int hp) 
    { 
        _hp = hp;
        if (_hp <= 50)
            SetBerserkerMode();
        
    }

private:
    void SetBerserkerMode()
    {
        cout << "�ſ� ������" << endl;
    }
private:
    int _hp = 100;

};

int main()
{
    
    Berserker b;
    b.SetHp(20);
    
    TestSuperCar car;
    

}
