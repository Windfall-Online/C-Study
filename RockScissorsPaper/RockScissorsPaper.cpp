#include <iostream>
using namespace std;

int main()
{
    // srand()�� �̿��ؼ� �õ尪�� �����ؾ���
    srand(time(0)); // �õ� ����

   

    // rand(); // 0~32767
    // 1, 2, 3�� �������� ����
   
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    // rand()�� ������ �ƴ�
    // ��ǻ�� ��ü�� ������ ������ ���� ����
    // � �ϳ��� ���ڸ� ������� ���� ���ڸ� �����ϴ� �Ϸ��� ������ ��ġ�� ��

    const int SCISSORS = 1;
    const int ROCK = 2;
    const int PAPER = 3;

    int wins = 0;
    int total = 0;

    while (true)
	{
		cout << "����(1) ����(2) ��(3) ����ּ���!" << endl;
        cout << "> ";

        if (total == 0)
        {
            cout << "���� �·�: ����" << endl;
        }
        else 
        {
            //TODO : Ȯ���� �����ش�.
            int winPercentage = (float)wins / total * 100;
        //  int winPercentage = (wins * 100) / total * 100;
            cout << "���� �·� : " << winPercentage << endl;
 
        }


        // ��ǻ��
        int computerValue = (rand() % 3) + 1;

        // �����
        int input;
        cin >> input;

        if (input == SCISSORS)
        {
            switch (computerValue)
            {
            case SCISSORS:
                cout << "����(�����) vs ����(��ǻ��) �����ϴ�!" << endl;
                break;
            case ROCK:
                cout << "����(�����) vs ����(��ǻ��) �����ϴ�!" << endl;
                total++;
                break;
            case PAPER:
                cout << "����(�����) vs ��(��ǻ��) �̰���ϴ�!" << endl;
                wins++;
                total++;
                break;
            }
        }
        else if (input == ROCK)
        {
			switch (computerValue)
			{
			case SCISSORS:
				cout << "����(�����) vs ����(��ǻ��) �̰���ϴ�!" << endl;
                wins++;
                total++;
				break;
			case ROCK:
				cout << "����(�����) vs ����(��ǻ��) �����ϴ�!" << endl;
				break;
			case PAPER:
				cout << "����(�����) vs ��(��ǻ��) �����ϴ�!" << endl;
                total++;
				break;
			}
        }
        else if (input == PAPER)
        {
			switch (computerValue)
			{
			case SCISSORS:
				cout << "��(�����) vs ����(��ǻ��) �����ϴ�!" << endl;
                total++;
				break;
			case ROCK:
				cout << "��(�����) vs ����(��ǻ��) �̰���ϴ�!" << endl;
                total++;
                wins++;
				break;
			case PAPER:
				cout << "��(�����) vs ��(��ǻ��) �����ϴ�!" << endl;
				break;
			}
        }
        else 
            break; // while ����������


    }
    
}

