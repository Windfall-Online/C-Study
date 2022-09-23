함수 포인터
왜 쓰는가?
Add 함수랑 Sub함수가있는데 뭐 다같이 바꿔야 할 경우 유용하게 쓰임
fn = Add를 fn = Sub이런식

1. 개념
int Add(int a, int b)라고 치면
Add라는 이름은 필요가 없음
int(int a, int b)이게 시그니처
typedef int(FUNC_TYPE)(int a, int b); a, b생략 가능
자료형과 파라미터 사이에 함수 포인터 이름을 붙여줌

// 1) 포인터	  *
// 2) 변수이름	  fn
// 3) 데이터 타입 함수 int(int a, int b)모양
FUNC_TYPE* fn;
의 구조가 완성됨

어셈블리에서는 
call을 할 때 Add함수 call이 아니라 그냥 주소를 call함
배열처럼 함수의 이름도 함수의 시작 위치를 들고 있음
--------------------------------------------------------------
2. 활용
함수의 동작을 함수 파라미터로 넣을 순 없나?


파라미터로 함수를 넣고
bool IsRareItem(Item* item)을 넣는다고 쳐보자
typedef bool(ITEM_SELECTOR)(Item* item)로 해주고


Item* FineItem(Item items[], int itemCount, bool()(Item* item))
함수이름 빼주고
Item* FineItem(Item items[], int itemCount, bool(*selector)(Item* item))
함수 포인터로 받을 거기 때문에 *붙여주고 파라미터 이름 붙여주기

좀 깔끔하게하면
Item* FineItem(Item items[], int itemCount, ITEM_SELECTOR* selector)
로도 가능해진다
--------------------------------------------------------------
3. 부수적인 설명
왜 함수 포인터에서는 이름이 가운데 낑겨있나?

typedef int NUBMER;

typedef int INTEGER;
typedef int* POINTER;
typedef int FUNC(int, int);
                        
typedef int ARRAY[20];

전형적인 typedef
근데 FUNC같은 경우에는

FUNC t;로 로컬로 쓰지를 못함
스택 메모리에 올라가지도않고 t에 가봤자 함수 원형만 있으니
동작이 안됨

그래서 함수 포인터로 만들어주고 싶은데
int *PFUNC(int, int)라고 가정
그런데 여기서 문제가
int* PFUNC(int, int)인지 int *PFUNC(int, int)
즉 함수가 int포인터를 반환하는지 아니면 int를 반환하는 함수 포인터인지
분간이 안되서
괄호로 한번 감싸줌
int (*PFUNC)(int, int);


멤버함수는 호출 규약이다르기 때문에 아래와 같이 클래스를 명시해줘야 함
typedef int(Knight::* FMEMFUNC)(int, int);

    PMEMFUNC mfn;

    Knight k1;

    mfn = &Knight::GetHp;
    
    (k1.*mfn)(1, 2);

k1의 함수 포인터 mfn의 위치로 *붙이고 인자 (1, 2)
mfn이라는 멤버 변수가 있을지도 모르니 이중적의미를 피하기 위함