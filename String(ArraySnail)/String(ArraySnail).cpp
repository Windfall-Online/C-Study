#include <iostream>
using namespace std;
#include <iomanip>

// 오늘의 주제 : 연습 문제

const int MAX = 100;

int board[MAX][MAX] = {};
int N = NULL;

int dy[] = { 0, 1, 0, -1 };
int dx[] = { 1, 0, -1, 0 };


void PrintBoard()
{
	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			cout << setfill('0') << setw(2) << board[y][x] << " ";
		}
		cout << endl;
	}
}

enum DIR
{
	RIGHT = 0,
	DOWN = 1,
	LEFT = 2,
	UP = 3,
};

bool CanGo(int y, int x)
{
	if (y < 0 || y >= N)
		return false;
	if (x < 0 || x >= N)
		return false;
	if (board[y][x] != 0)
		return false;

	return true;
}

void SetBoard()
{
	// 1 2 3 4 5
	//         6
	//

	int dir = RIGHT;

	int num = 1;

	int y = NULL;
	int x = NULL;

	while (true)
	{
		board[y][x] = num;



		if (num == N * N)	// 최대 경우의수가 N * N 이니까 num이 N * N이면 종료
		{
			break;
		}

		int nextY = y + dy[dir];
		int nextX = x + dx[dir];
	/*	switch (dir)
		{
		case RIGHT:
			nextY = y;
			nextX = x + 1;
			break;
		case DOWN:
			nextY = y + 1;
			nextX = x;
			break;
		case LEFT:
			nextY = y;
			nextX = x - 1;
			break;
		case UP:
			nextY = y - 1;
			nextX = x;
			break;
		}*/



		if (CanGo(nextY, nextX))
		{
			y = nextY;
			x = nextX;
			num++;
		}
		else
		{
			/*switch (dir)
			{
			case RIGHT:
				dir = DOWN;
				break;
			case DOWN:
				dir = LEFT;
				break;
			case LEFT:
				dir = UP;
				break;
			case UP:
				dir = RIGHT;
				break;

			}*/

			dir = (dir + 1) % 4;
		}
	}

}

int main()
{
	cin >> N;
	SetBoard();
	PrintBoard();
}

