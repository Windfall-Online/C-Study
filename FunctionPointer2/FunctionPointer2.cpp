#include <iostream>
using namespace std;

// ������ ���� : �Լ� ������2

 class Knight
{
public:
	
	int GetHp(int, int)
	{
		cout << "GetHp()" << endl;
		return _hp;
	}
public:
	int _hp = 100;
};
// typedef�� ����
// typedef ���� �����ʰ� -> ������ (Ŀ���� Ÿ�� ����)
// [���� ����]���� typedef�� �տ��� ���̴� ��

typedef int NUBMER;

typedef int INTEGER;
typedef int* POINTER;
typedef int FUNC(int, int);     // FUNC()�� Ÿ����ü�� � �Լ�Ÿ���� �ǹ��� �ǵ� ���ڴ� �ƹ��͵� �ȹް�
                        // ����� int�� ���ְڴ�
typedef int ARRAY[20];

// �� ��� �̸��� ������� �����ϱ�
typedef int(*PFUNC)(int, int);             // �Ϲ� �Լ� ������


typedef int(Knight::*PMEMFUNC)(int, int);  // ��� �Լ� ������

int Test(int a, int b)
{
    cout << "Test" << endl;
    return 0;
}



int main()
{
    // �Լ� ������
    // 1) ������           *
    // 2) ������ �̸�      fn
    // 3) Ÿ��             �Լ�(���ڷ� int2���� �ް�, int 1���� ��ȯ)
    
    //int(*fn)(int, int);    // �ѹ濡 ����� ����� �ͼ�������!

    //typedef int(FUNC_TYPE)(int, int);
    //FUNC_TYPE fn;
    
    PFUNC fn;

    fn = &Test; // & ���� ���� (C����� ȣȯ�� ����) &�� ���̴°� ����
    
    fn(1, 2);

    (*fn)(1, 2);

    // �� �������δ� [���� �Լ� / ���� �Լ�]�� ���� �� �ִ� (ȣ�� �Ծ��� ������)
    Test(1, 2);

    PMEMFUNC mfn;

    Knight k1;

    mfn = &Knight::GetHp;
    
    (k1.*mfn)(1, 2);

    Knight* k2 = new Knight();

    (k2->*mfn)(1, 2);


    delete k2;

}
