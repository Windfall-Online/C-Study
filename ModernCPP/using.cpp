#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// 오늘의 주제 : using

typedef vector<int>::iterator Veclt;

typedef __int64 id;
using id2 = int;

// 1) 직관성
typedef void(*MyFunc)();
using MyFunc2 = void(*)();

// 2) 템플릿
template<typename T>

using List = std::list<T>;

//template<typename T>
// typedef std::vector<T> List2;
// typedef는 템플릿이랑 호환이 안됨

// 그럼 이전에는 어떻게 했느냐?
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