#include <cstdio>
#include <queue>
using namespace std;
int main()
{
	int N, K;
	int visit[100001] = { 0 };
	scanf("%d %d", &N, &K);

	queue< pair<int, int>> que;
	que.push(make_pair(N, 0));
	int dn = N;
	int dx = 100000;
	int cnt = 0;
	visit[dn] = 1;
	while (!que.empty())
	{
		dn = que.front().first;
		cnt = que.front().second;
		que.pop();
		//printf(" %d", dn);
		if (dn == K) break;
		if (dn - 1 > -1 && visit[dn-1] == 0)
		{
			visit[dn - 1] = 1;
			que.push(make_pair(dn-1, cnt + 1));
		}
		if (dn + 1 <= 100000 && visit[dn + 1] == 0)
		{
			visit[dn + 1] = 1;
			que.push(make_pair(dn + 1, cnt + 1));
		}
		if (dn * 2 <= 100000 && visit[dn * 2] == 0)
		{
			visit[dn * 2] = 1;
			que.push(make_pair(dn * 2, cnt + 1));
		}
	}
	printf("%d", cnt);
}