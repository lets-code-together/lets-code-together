/*파도반 수열*/
#include<iostream>
#include<algorithm>
using namespace std;

long long dp[101];
int n, line;

int main()
{
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= 100; i++)
	{
		dp[i] = dp[i - 3] + dp[i - 2];
	}
	
	for (int i = 0; i < n; i++)
	{
		cin >> line;
		cout << dp[line] << endl;
	}
	
}