#include <iostream>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

// 오늘의 주제 : delete (삭제된 함수)
// 특정 기능을 꺼버리고 싶다

class Knight
{
public:

private:
	// 고전적인 방법
	// 정의되지 않은 비공개 함수
	//void operator=(const Knight& k);
public:
	void operator=(const Knight& k) = delete;


	// 모든 것을 뚫는 창 vs 모든 것을 막는 방패
	// friend가 나오면 설계가 잘못된거임
	friend class Admin;
private:
	int _hp = 100;

};

class Admin
{
public:
	void CopyKnight(const Knight& k)
	{
		Knight k1;
		// 복사 연산
		k1 = k;
	}
};

int main()
{
	Knight k1;

	Knight k2;

	// 복사 연산자를 막자!!
	k1 = k2;
	Admin admin;
	admin.CopyKnight();

}