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
	if (info == nullptr)		// 포인터를 넘길때는 null체크를 해야함
		return;

	cout << info->hp << endl;
	cout << info->attack << endl;
	cout << info->defence << endl;
	

	// 별 뒤에 붙인다면?
	// StatInfo* const info
	// info라는 바구니의 내용물(주소)를 바꿀 수 없음
	// info는 주소값을 갖는 바구니 -> 이 주소값이 고정이다!!
	// 즉 info자체가 갖고있는 주소값을 고정시키겠다


	// 별 이전에 붙인다면?
	// const StatInfo* info
	// info가 '가리키고 있는' 바구니의 내용물을 바꿀 수 없음
	// '원격' 바구니의 내용물을 바꿀 수 없음


	// info[주소값] 주소값[데이터]

	// info = &globalinfo;

	// info->hp = 10000;

}

void PrintInfoByRef(const StatInfo &info)
{

	cout << info.hp << endl;
	cout << info.attack << endl;
	cout << info.defence << endl;

}

// 특정 조건을 만족하는 몬스터를 찾는 함수

StatInfo* FindMonster()
{

	// TODO : Heap 영역에서 뭔가를 찾아봄
	// 찾았다!
	// return monster~~

	return nullptr;

}

#define OUT
// 바뀔수도 있다는 힌ㄷ트
void ChangeInfo(OUT StatInfo& info)
{
	info.hp = 10000;
}

int main()
{
	StatInfo player;
	// 포인터 vs 참조
	// 성능 : 똑같음!
	// 편의성 : 참조 승!


	// 1) 편의성 관련
	// 편의성이 좋다는게 꼭 장점만은 아니다.
	// 포인터는 주소를 넘기니 확실하게 원본을 넘긴다는 힌트를 졸 수 있는데
	// 참조는 자연스럽게 모르고 지나칠 수도 있음!
	// ex) 마음대로 고친다면?
	// const를 사용해서 마음대로 고치는 부분 개선 가능
	// 어지간하면 참조는 const와 붙음


	// 참고로 포인터도 const를 사용가능.
	// *기준으로 앞에 붙이느냐, 뒤에 붙이느냐에 따라 의미가 달라진다.
	
	// 2) 초기화 여부
	// 참조 타입은 바구니의 2번째 이름을 지어준 느낌(별칭)
	// -> 참조하는 대상이 없으면 절대 안됨
	// 반면 포인터는 그냥 어떤 ~ 주소라는 의미
	// -> 대상이 실존하지 않을 수도 있음
	// 포인터에서 '없다'는 의미로? nullptr
	// 참조 타입은 이런 nullptr이 없음

	StatInfo* pointer = nullptr;  // 어떠한 주소도 가리키고 있지 않다.
	int a = NULL;                 // NULL은 그냥 0

	pointer = &player;
	PrintInfoByPtr(pointer);

	// 레퍼런스타입은 초기화를 무조건해줘야함(어떤 값이든 들고있어야함)

	StatInfo& reference = player;

	PrintInfoByRef(reference);

	// 그래서 결론은?
	// 사실 Team by Team... 정해진 답은 없다.
	// ex) 구글에서 만든 오픈소스를 보면 거의 무조건 포인터 사용
	// ex) 언리얼 엔진에선 reference도 애용
	

	// 선호 스타일)
	// - 없는 경우도 고려해야 한다면 pointer (null 체크)
	// - 바뀌지 않고 읽는 용도(readonly)만 사용하면 const ref&
	// - const를 붙여줬으니 내부에서 뭔 짓거리를 할 수 없고
	// 사용하는것은 .을 찍어서 편리하게
	// 그 외 일반적으로 ref (명시적으로 호출할 때 OUT을 붙인다)
	// -- 단, 다른 사람이 pointer를 만들어놓은걸 이어서 만든다면, 그냥 계속 pointer사용
	// (섞어 사용하지는 않는다)




	ChangeInfo(OUT player);


	// Bonus) 포인터로 사용하던걸 참조로 넘겨주려면?
	// 포인터타입을 참조타입으로 넘겨주기
	// pointer[주소(&player)]    ref, player[데이터]
	
	StatInfo& ref = *pointer;
	PrintInfoByRef(ref);


	// Bonus) 참조로 사용하던걸 포인터로 넘겨주려면?
	// pointer[주소] reference, player[데이터]
	StatInfo* reference = &player;
	PrintInfoByPtr(&reference);


}