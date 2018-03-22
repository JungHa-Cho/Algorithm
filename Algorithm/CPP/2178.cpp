#include <cstdio>
#include <queue>
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int panel[101][101] = { 0 };
int answer[101][101] = { 0 };
bool visit[101][101] = { 0 };

using namespace std;
int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	getchar();
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			panel[i][j] = getchar() - '0';
		}
		getchar();
	}

	queue< pair<int, int> > que;
	que.push(make_pair(1, 1));
	answer[1][1] = 0;
	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		if (x == N && y == M) break;
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx > 0 && nx <= N && ny > 0 && ny <= M)
			{
				if (panel[nx][ny] == 1)
				{
					panel[nx][ny] = 2;
					answer[nx][ny] = answer[x][y] + 1;
					que.push(make_pair(nx, ny));
				}
			}
		}
	}
	printf("%d", answer[N][M] + 1);
}