#include <iostream>
using namespace std;

int main()
{
    // int input;
    // cin >> input;
    // cout << "hello world" << endl;


    // 별찍기)
    // 유저들이 어떤 정수를 입력하면
    // N*N개의 별을 찍었으면 좋겠어요!!
   	 
    int input;
    cin >> input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 별찍기2)
    // 음.. 그냥 N*N개의 별을 찍으니까 너무 심심하다.
    // 1개부터 시작해서 순차적으로 줄마다 증가하게 수정해주세요!

    int input2;
    cin >> input2;

    for (int i = 0; i < input2; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 별찍기3)
    // 모양이 많이 개선되긴 했는데.
    // N개부터 시작해서 줄마다 1개씩 줄어드는 형태로
   
    int input3;
    cin >> input3;

	for (int i = 0; i < input3; i++)
	{
		for (int j = 0; j < (input3 - i); j++)
		{
			cout << "*";
		}
		cout << endl;
	}



    // 구구단)
    // 2*1=2
    // 2단부터 9단까지 구구단을 출력해주세요

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            int answer = i * j;
            cout << i << "*" << j << "=" << answer << endl;
        }
    }


}

