//이분그래프(색칠된 정점과 간선으로 연결 된 다음 정점의 색이 같으면 false dfs함수에서 boolean함수로 비교)
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

vector<int> a[20001];
int color[20001];

bool dfs(int node, int c)
{
	color[node] = c;

	for (int i = 0; i < a[node].size(); i++)
	{
		int next = a[node][i];

		if (color[next] == 0) //노드의 색이 0이면 색칠
		{
			if (dfs(next, 3 - c) == false) //다음 노드의 색이 0이 아니면 이미 방문한 점이기 때문에 색칠되어 있다
			{
				return false;
			}
		}
		else if (color[next] == color[node])
		{
			return false;
		}
	}
	return true;
}
int main() 
{
	int t;
	scanf("%d\n", &t);

	while (t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);

		for (int i = 1; i <= n; i++)
		{
			a[i].clear();
			color[i] = 0;
		}
		for (int i = 0; i < m; i++)
		{
			int u, v;
			scanf("%d %d", &u, &v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		bool ok = true;

		for (int i = 1; i <= n; i++)
		{
			if (color[i] == 0)
			{
				if (dfs(i, 1) == false)
				{
					ok = false;
				}
			}
		}
		printf("%s\n", ok ? "YES" : "NO");
	}
	return 0;
}