/*GCD гу*/
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a%b);
	}
}

int main()
{
	int tc, n, a[101];
	long long cnt;

	cin >> tc;

	while (tc--)
	{
		cnt = 0;
		cin >> n;
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				cnt += gcd(a[i], a[j]);
			}
		}
		cout << cnt << endl;
	}
}