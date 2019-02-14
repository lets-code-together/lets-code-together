/*연속 합*/
#include<iostream>
#include<algorithm>
using namespace std;

long long a[100001], dp[100001];
int n;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	dp[0] = a[0];
	long long ans = dp[0];

	for (int i = 1; i < n; i++)
	{
		dp[i] = max(dp[i - 1] + a[i], a[i]);
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
}
