/*계단 오르기
규칙 : 계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다. 즉, 한 계단을 밟으면서 이어서 다음 계단이나, 다음 다음 계단으로 오를 수 있다.
       연속된 세 개의 계단을 모두 밟아서는 안 된다. 단, 시작점은 계단에 포함되지 않는다.
       마지막 도착 계단은 반드시 밟아야 한다.
	   계단에 쓰여 있는 점수를 합해 얻을 수 있는 최대값*/
#include<iostream>
#include<algorithm>
using namespace std;

int a[301], dp[301], n, ans;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

		dp[0] = a[0];
		dp[1] = a[0] + a[1];
		dp[2] = max(a[0] + a[2], a[1] + a[2]);

		for (int i = 3; i < n; i++)
		{
			dp[i] = max(dp[i - 2] + a[i], dp[i - 3] + a[i - 1] + a[i]);
		}
		cout << dp[n - 1] << endl; //n-1개까지
}