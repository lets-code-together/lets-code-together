/*������ ��(��������) ���� ���� N�� �־����� �� ������ ���� ������ ���ϴ� ���α׷��� �ۼ� 0���� ���۰���*/
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