/*포도주 시식 n개의 포도주가 나열 되어있는대 3잔 연속으로 마실 수 없을때 최대로 마실수 있는 양은??*/
#include<iostream>
#include<algorithm>
using namespace std;

int arr[10001];
int dp[10001];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
		dp[0] = arr[0];
		dp[1] = arr[0] + arr[1];
		dp[2] = max(arr[0] + arr[2], arr[1] + arr[1]);
		dp[2] = max(dp[1], dp[2]);
		
		for (int i = 0; i < n; i++)
		{
			dp[i] = max(arr[i] + dp[i - 2], arr[i] + dp[i - 3] + arr[i - 1]);
			dp[i] = max(dp[i], dp[i - 1]);
		}
		cout << dp[n - 1] << endl;
	
}