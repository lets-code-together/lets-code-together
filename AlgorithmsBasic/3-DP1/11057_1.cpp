/*오르막 수(오름차순) 수의 길이 N이 주어졌을 때 오르막 수의 개수를 구하는 프로그램을 작성 0으로 시작가능*/
#include<iostream>
using namespace std;

long long d[1001][10];
const long long mod = 10007;

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i == 1)
				d[i][j] = 1;
			else if(i > 1)
			{
				for (int k = 0; k <= j; k++)
				{
					d[i][j] += d[i - 1][k];
				}
				d[i][j] %= mod;
			}
		}
	}
	int n;
	long long ans = 0;
	cin >> n;

	for (int j = 0; j <= 9; j++)
		ans += d[n][j];

	cout << ans % mod;
}