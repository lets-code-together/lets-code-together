/*쉬운 계단 수*/
#include<iostream>
using namespace std;

long long d[101][10];
const long long mod = 1000000000;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (i == 1 && j != 0)
				d[i][j] = 1;
			else if (i > 1)
			{
				if (j - 1 >= 0)
					d[i][j] += d[i - 1][j - 1];
				if (j + 1 <= 9)
					d[i][j] += d[i - 1][j + 1];
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