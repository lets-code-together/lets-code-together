/*��ƼĿ ��ƼĿ�� ��� �ִ밪�� ������ ���� ���Ѵ� ���� �����ϴ� ��ƼĿ�� ����� �� ����*/
#include<iostream>
#include<algorithm>
using namespace std;

int T, n;
int arr[100001][2];
int dp[100001][2];

int main()
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int j;
		cin >> n;
		for (j = 0; j < n; j++)
			dp[j][0] = dp[j][1] = arr[j][0] = arr[j][1] = 0;
		for (j = 0; j < n; j++)
			cin >> arr[j][0];
		for (j = 0; j < n; j++)
			cin >> arr[j][1];
		for (j = 0; j < n; j++)
		{
			dp[j][0] = max(max(dp[j - 1][1] + arr[j][0], dp[j - 2][0] + arr[j][0]), dp[j - 2][1] + arr[j][0]);
			dp[j][1] = max(max(dp[j - 1][0] + arr[j][1], dp[j - 2][1] + arr[j][1]), dp[j - 2][0] + arr[j][1]);
		}
		cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
	}

}