#include <stdio.h>
#include <deque>

using namespace std;
int main()
{	//0 empty, 1 wall
	deque< pair<int, int>> deq;
	int xx[4] = { 0, 0, 1, -1 };
	int yy[4] = { 1, -1, 0, 0 };
	int maze[101][101] = { 0 };
	int visit[101][101] = { 0 };
	int N, M;

	scanf("%d %d", &M, &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			scanf("%1d", &maze[i][j]);
		}
	}

	deq.push_back(make_pair(1, 1));
	visit[1][1] = 1;
	while (!deq.empty())
	{
		//for (int i = 1; i <= N; i++)
		//{
		//	for (int j = 1; j <= M; j++)
		//	{
		//		printf("%d ", visit[i][j]);
		//	}
		//	printf("\n");
		//}
		int x = deq.front().first;
		int y = deq.front().second;
		deq.pop_front();
		for (int i = 0; i < 4; i++)
		{
			int dx = x - xx[i];
			int dy = y - yy[i];
			if (1 <= dx && dx <= N && 1 <= dy && dy <= M)
			{
				if (visit[dx][dy] == 0)
				{
					if (maze[dx][dy] == 0)
					{
						visit[dx][dy] = visit[x][y];
						deq.push_front(make_pair(dx, dy));
					}
					else 
					{
						visit[dx][dy] = visit[x][y] + 1;
						deq.push_back(make_pair(dx, dy));
					}
				}
			}
		}
	}
	printf("%d\n", visit[N][M]-1);
}