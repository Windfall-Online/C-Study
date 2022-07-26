// CPP_Study(Array).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


// ����, ���ڿ�
// bool�� �׳� ��������, ��/������ ��Ÿ���� ���� ���
// char�� �������� �׳� �������� '����' �ǹ̸� ��Ÿ���� ���� ���

// char : ���ĺ� / ���� ���ڸ� ��Ÿ��
// wchar_t : �����ڵ� ���ڸ� ��Ÿ��

// ASCII (American Standard Code for information interchange)


// 
char ch = 97;
char ch2 = 'a';
char ch3 = '1'; // 1�̶�� ������ �ƽ�Ű��ȣ, 49��


// ����ȭ �ô뿡�� ������� ���� �� �� ����
// �� ���� ��� ���ڿ� ���� ���� �ڵ带 �ο��� ���� �����ڵ�
// ����)  �����ڵ忡�� ���� ���� ��ȣ�� �����ϴ°� �ѱ���/�߱��� 
// �����ڵ�� ǥ�� ����� ���������� �ִµ� ��ǥ������ UTF8 UTF16

// UTF8
// - ���ĺ�, ���� 1����Ʈ(ASCII ������ ��ȣ)
// - ���� ������ Ư���� ���ڴ� 2����Ʈ
// - �ѱ�, ���� �� 3����Ʈ

// UTF16
// - ���ĺ�, ����, �ѱ�, ȥ�� �� ����  ��κ� ���� 2����Ʈ
// - ��~~�� �������� ��� ���ڸ� 4����Ʈ (��ǻ� �����ص� ��)

// �����ڵ�� L �� �ٿ��ش�

wchar_t wch = L'��';
// Oxc548�� �ص� ����
// Escape Sequence
// ǥ���ϱ� �ָ��� �ֵ��� ǥ��
// \t = �ƽ�Ű�ڵ� 9 = tab
// \n = �ƽ�Ű�ڵ� 10 = LineFeed (���� �Ʒ���)
// \r = �ƽ�Ű�ڵ� 13 = CarrigeReturn (Ŀ�� <<)
// \0 = �ƽ�Ű�ڵ� 0 = NULL


// ���͸� ġ�� \n\r
// ���� ����ǥ ��ü�� ǥ���ϰ� ����
// ''' ���ƴ϶� '\'' ���� ����ǥ�� ǥ���ϰ� �ʹ�



// ���ڿ�
// ���ڵ��� ���� ��� �� �ִ� �� (���� �迭)
// ����(1~8����Ʈ) ���� ���̷�
// Ex) Hello World 
// ������ü�� �������̴�
// ���� ������ �ݵ�� \0 NULL ���ڸ� �ٿ��� ������ �����Ѵ�.

char str[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
char str2[] = "Hello World";
wchar_t str3[] = L"Hello World";
// �����ڵ�� �ڵ� ��ȯ

int main()
{

	

    cout << str << endl;




    cout << ch << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    // cout�� char ����
    cout << wch << endl;
    wcout.imbue(locale("kor")); // �ѱ� �ν��� ���ؼ� �̰� �߰��������
    wcout << wch << endl;       // �����ڵ�� wcout

    cout << '\'' << endl;

}
