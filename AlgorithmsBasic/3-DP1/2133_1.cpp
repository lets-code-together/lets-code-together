/*타일 채우기*/
#include<iostream>
using namespace std;

int dp[31];
int n;

int main()
{
	cin >> n;

	dp[0] = 1;
	dp[1] = 0;
	dp[2] = 3;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = 3 * dp[i - 2];
		
		for(int j = i - 4; j >= 0; j -= 2)
		{
			dp[i] += 2 * dp[j];
		}
	}
	cout << dp[n] << endl;
}
