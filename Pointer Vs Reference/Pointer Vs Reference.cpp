#include <iostream>
using namespace std;

struct StatInfo 
{

	int hp = 100;
	int attack = 50;
	int defence = 2;

};

StatInfo globalinfo;

void PrintInfoByPtr(const StatInfo*  info)
{
	if (info == nullptr)		// �����͸� �ѱ涧�� nullüũ�� �ؾ���
		return;

	cout << info->hp << endl;
	cout << info->attack << endl;
	cout << info->defence << endl;
	

	// �� �ڿ� ���δٸ�?
	// StatInfo* const info
	// info��� �ٱ����� ���빰(�ּ�)�� �ٲ� �� ����
	// info�� �ּҰ��� ���� �ٱ��� -> �� �ּҰ��� �����̴�!!
	// �� info��ü�� �����ִ� �ּҰ��� ������Ű�ڴ�


	// �� ������ ���δٸ�?
	// const StatInfo* info
	// info�� '����Ű�� �ִ�' �ٱ����� ���빰�� �ٲ� �� ����
	// '����' �ٱ����� ���빰�� �ٲ� �� ����


	// info[�ּҰ�] �ּҰ�[������]

	// info = &globalinfo;

	// info->hp = 10000;

}

void PrintInfoByRef(const StatInfo &info)
{

	cout << info.hp << endl;
	cout << info.attack << endl;
	cout << info.defence << endl;

}

// Ư�� ������ �����ϴ� ���͸� ã�� �Լ�

StatInfo* FindMonster()
{

	// TODO : Heap �������� ������ ã�ƺ�
	// ã�Ҵ�!
	// return monster~~

	return nullptr;

}

#define OUT
// �ٲ���� �ִٴ� ����Ʈ
void ChangeInfo(OUT StatInfo& info)
{
	info.hp = 10000;
}

int main()
{
	StatInfo player;
	// ������ vs ����
	// ���� : �Ȱ���!
	// ���Ǽ� : ���� ��!


	// 1) ���Ǽ� ����
	// ���Ǽ��� ���ٴ°� �� �������� �ƴϴ�.
	// �����ʹ� �ּҸ� �ѱ�� Ȯ���ϰ� ������ �ѱ�ٴ� ��Ʈ�� �� �� �ִµ�
	// ������ �ڿ������� �𸣰� ����ĥ ���� ����!
	// ex) ������� ��ģ�ٸ�?
	// const�� ����ؼ� ������� ��ġ�� �κ� ���� ����
	// �������ϸ� ������ const�� ����


	// ����� �����͵� const�� ��밡��.
	// *�������� �տ� ���̴���, �ڿ� ���̴��Ŀ� ���� �ǹ̰� �޶�����.
	
	// 2) �ʱ�ȭ ����
	// ���� Ÿ���� �ٱ����� 2��° �̸��� ������ ����(��Ī)
	// -> �����ϴ� ����� ������ ���� �ȵ�
	// �ݸ� �����ʹ� �׳� � ~ �ּҶ�� �ǹ�
	// -> ����� �������� ���� ���� ����
	// �����Ϳ��� '����'�� �ǹ̷�? nullptr
	// ���� Ÿ���� �̷� nullptr�� ����

	StatInfo* pointer = nullptr;  // ��� �ּҵ� ����Ű�� ���� �ʴ�.
	int a = NULL;                 // NULL�� �׳� 0

	pointer = &player;
	PrintInfoByPtr(pointer);

	// ���۷���Ÿ���� �ʱ�ȭ�� �������������(� ���̵� ����־����)

	StatInfo& reference = player;

	PrintInfoByRef(reference);

	// �׷��� �����?
	// ��� Team by Team... ������ ���� ����.
	// ex) ���ۿ��� ���� ���¼ҽ��� ���� ���� ������ ������ ���
	// ex) �𸮾� �������� reference�� �ֿ�
	

	// ��ȣ ��Ÿ��)
	// - ���� ��쵵 ����ؾ� �Ѵٸ� pointer (null üũ)
	// - �ٲ��� �ʰ� �д� �뵵(readonly)�� ����ϸ� const ref&
	// - const�� �ٿ������� ���ο��� �� ���Ÿ��� �� �� ����
	// ����ϴ°��� .�� �� ���ϰ�
	// �� �� �Ϲ������� ref (��������� ȣ���� �� OUT�� ���δ�)
	// -- ��, �ٸ� ����� pointer�� ���������� �̾ ����ٸ�, �׳� ��� pointer���
	// (���� ��������� �ʴ´�)




	ChangeInfo(OUT player);


	// Bonus) �����ͷ� ����ϴ��� ������ �Ѱ��ַ���?
	// ������Ÿ���� ����Ÿ������ �Ѱ��ֱ�
	// pointer[�ּ�(&player)]    ref, player[������]
	
	StatInfo& ref = *pointer;
	PrintInfoByRef(ref);


	// Bonus) ������ ����ϴ��� �����ͷ� �Ѱ��ַ���?
	// pointer[�ּ�] reference, player[������]
	StatInfo* reference = &player;
	PrintInfoByPtr(&reference);


}