1. 개념
print()함수가 인자만 int, float, double, const char* 이런식으로
필요하면
print()함수가 너무 많이생겨나서
템플릿을 이용함

기본 형식
template<typename T>

void Print(T a)
{


}
이런식으로 사용

---------------------------------------------------------
2. 활용


함수를 사용하는데 명시적으로 타입을 지정하려면?
print<int>(50);이렇게 해주면 됨

리턴타입이 다른 버전은 어떻게 하나?
리턴타입에 typename을 적어주면 된다

인자 2개가 서로 다른 속성인 경우는?
template<typename T1, typename T2>
2개의 typename을 만들면 됨

Knight k1;
을 만들고
print(k1)을 해보자
바로 오류
ostream& operator<<(ostream& os, const Knight& k)
{
    os << k._hp;
    return os;
}
연산자 오버로딩

템플릿 특수화
template<>
void Print(Knight a)
{
    cout << "Knight!!!!!" << endl;
    cout << a._hp << endl;
}

Knight를 넘겨줬을때만 사용가능
--------------------------------------------
3. 

template<typename T, int SIZE = 10>
class RandomBox
{
public:
    T GetRandomData()
    {
        int idx = rand() % SIZE;
        return _data[idx];
    }

public:
    T _data[SIZE];
};
이렇게 함수 인자 넣는것처럼 사용할 수도 있음

// 템플릿 특수화
template<int SIZE>
class RandomBox<double, SIZE>
{
public:
	double GetRandomData()
	{
		int idx = rand() % SIZE;
		return _data[idx];
	}

public:
	double _data[SIZE];
};

RandomBox 클래스이지만 double인경우에만 특수하게 나오는 것이기 때문에
기존 RandomBox와 구분하기위해 뒤에 double, SIZE를 붙여줌