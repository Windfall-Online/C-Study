#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// ������ ���� : using

typedef vector<int>::iterator Veclt;

typedef __int64 id;
using id2 = int;

// 1) ������
typedef void(*MyFunc)();
using MyFunc2 = void(*)();

// 2) ���ø�
template<typename T>

using List = std::list<T>;

//template<typename T>
// typedef std::vector<T> List2;
// typedef�� ���ø��̶� ȣȯ�� �ȵ�

// �׷� �������� ��� �ߴ���?
template<typename T>
struct List2
{
	typedef std::list<T> type;
};


int main()
{
	id playerid = 0;

	List<int> li;
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	
	List2<int>::type li2;

}