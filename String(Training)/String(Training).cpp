#include <iostream>
using namespace std;


// ������ ���� : ���� ����

// ����1) ���ڿ� ���̸� ����ϴ� �Լ�
int StrLen(const char* str)
{
	// str�̶�� ���ڿ��� ���̸� ��ȯ

	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	return count;
}

// ����2) ���ڿ� ���� �Լ�
char* StrCpy(char* dest, char* src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}


// ����3) ���ڿ� �����̱�

char* StrCat(char* dest, char* src)
{
	int len = StrLen(dest);

	int i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';

	return dest;
	
}

// ����4) ���ڿ� �� strcmp �ƽ�Űǥ ������ ������ �������� <0 ������ 0 �ָ� 0<
// aaa�� bbb�� ���ϸ� -1�̳���
// bbb�� aaa�� ���ϸ� +1
// aaa �� aaa�� ���ϸ� 0

int StrCmp(char* a, char* b)
{
	int i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] > b[i])
		{
			return 1;
		}
		if (a[i] < b[i])
		{
			return -1;
		}
		i++;
	}
	return 0;
}

// ����5) ���ڿ� ������
void ReverseStr(char* a)
{
	int len = StrLen(a);
	
	for (int i = 0; i < len / 2; i++)
	{
		int temp = a[i];
		a[i] = a[len - 1 - i];
		a[len - 1 - i] = temp;
	}
}

#pragma warning(disable: 4996)

int main()
{
	const int BUF_SIZE = 100;

	// [H][e][l][l][o]['\0'][][][][][][]
	char a[BUF_SIZE] = "Hello";
	char b[BUF_SIZE] = "Hella";
		
	int len = StrLen(a);

	cout << len << endl;

	// StrCpy(b, a);
	// cout << b << endl;

	// StrCat(a, b);
	// cout << a << endl;

	// int value = StrCmp(a, b);
	// cout << value;

	return 0;
}
