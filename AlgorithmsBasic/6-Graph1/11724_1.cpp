//연결요소의 개수
#include <cstdio>
#include <vector>

using namespace std;

vector<int> a[1001];
bool check[1001];

void dfs(int node)
{
	check[node] = true;

	for (int i = 0; i < a[node].size(); i++)
	{
		int next = a[node][i];

		if (check[next] == false)
		{
			dfs(next);
		}
	}
}
int main()
{
	int n, m; //정점의 개수 : n 간선의 개수 : m
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++)
	{
		int u, v; //간선 양 끝점
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	int components = 0;

	for (int i = 1; i <= n; i++)
	{
		if (check[i] == false)
		{
			dfs(i);
			components += 1;
		}
	}
	printf("%d\n", components);
	return 0;
}