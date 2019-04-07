//반복수열
#include <iostream>

using namespace std;

int check[1000000];

int pow(int x, int p) //어떤 수를 p번 곱한다
{
	int ans = 1;

	for (int i = 0; i < p; i++)
	{
		ans = ans * x;
	}
	return ans;
}

int next(int a, int p) //어떤 수를 각 자리를 10으로 나누며 각자리수를 p번곱한다.
{
	int ans = 0;

	while (a > 0)
	{
		ans += pow(a % 10, p);
		a /= 10;
	}
	return ans;
}

int length(int a, int p, int cnt)
{
	if (check[a] != 0) //방문했으면 그전 인덱스
	{
		return check[a] - 1; 
	}
	check[a] = cnt;
	int b = next(a, p); //a다음 이므로 cnt+1
	return length(b, p, cnt + 1);
}
int main()
{
	int a, p;
	cin >> a >> p;
	cout << length(a, p, 1) << endl;
	return 0;
}
