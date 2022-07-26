#include <iostream>
using namespace std;


// 오늘의 주제 : 연습 문제

// 문제1) 문자열 길이를 출력하는 함수
int StrLen(const char* str)
{
	// str이라는 문자열의 길이를 반환

	int count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	return count;
}

// 문제2) 문자열 복사 함수
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


// 문제3) 문자열 덧붙이기

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

// 문제4) 문자열 비교 strcmp 아스키표 상으로 왼쪽이 먼저오면 <0 같으면 0 멀면 0<
// aaa와 bbb를 비교하면 -1이나옴
// bbb와 aaa를 비교하면 +1
// aaa 와 aaa를 비교하면 0

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

// 문제5) 문자열 뒤집기
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
