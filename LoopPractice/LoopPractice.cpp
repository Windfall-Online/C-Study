#include <iostream>
using namespace std;

int main()
{
    // int input;
    // cin >> input;
    // cout << "hello world" << endl;


    // �����)
    // �������� � ������ �Է��ϸ�
    // N*N���� ���� ������� ���ھ��!!
   	 
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

    // �����2)
    // ��.. �׳� N*N���� ���� �����ϱ� �ʹ� �ɽ��ϴ�.
    // 1������ �����ؼ� ���������� �ٸ��� �����ϰ� �������ּ���!

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

    // �����3)
    // ����� ���� �����Ǳ� �ߴµ�.
    // N������ �����ؼ� �ٸ��� 1���� �پ��� ���·�
   
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



    // ������)
    // 2*1=2
    // 2�ܺ��� 9�ܱ��� �������� ������ּ���

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            int answer = i * j;
            cout << i << "*" << j << "=" << answer << endl;
        }
    }


}

