/*어떤 자연수 N을 그보다 작거나 같은 제곱수의 합으로 표현할때 표현할 수 있는 항의 개수의 최소개수를 구하는 프로그램을 작성하시오./*/
#include<iostream>
#include<algorithm>
using namespace std;

int dp[100001], n;

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		dp[i] = i;
		
		for (int j = 1; j * j <= i; j++)
		{
			dp[i] = min(dp[i], dp[i - j * j] + 1); // 1개를 더해준 이유 : i보다 작은 가장 큰 제곱수
		}
	}
	cout << dp[n] << endl;
}