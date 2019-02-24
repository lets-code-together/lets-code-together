/*가장 긴 바이토닉 수열*/
#include<iostream>
#include<algorithm>
using namespace std;

int a[1001], dp[1001], r_dp[1001], ans = 0;

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//가장 긴 증가하는 부분수열
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1; //부분수열의 크기 1로 초기화

		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	for (int i = n - 1; i >= 0; i--) //뒤에서 부터 검색 초기값이 n-1인 이유는 0부터 시작이기 때문에
	{
		r_dp[i] = 1;
		
		for (int j = n - 1; j >= i; j--)
		{
			if (a[j] < a[i])
				r_dp[i] = max(r_dp[i], r_dp[j] + 1);
		}
	}

	for (int i = 0; i < n; i++) //증가하는 부분수열과 감소하는 부분수열에서 숫자가 가장 큰 원소가 겹치기 때문에 한개를 빼준다.
	{
		if (ans < dp[i] + r_dp[i] - 1)
			ans = max(dp[i] + r_dp[i] - 1, ans);
	}
	cout << ans << endl;
}