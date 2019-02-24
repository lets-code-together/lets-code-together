/*� �ڿ��� N�� �׺��� �۰ų� ���� �������� ������ ǥ���Ҷ� ǥ���� �� �ִ� ���� ������ �ּҰ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�./*/
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
			dp[i] = min(dp[i], dp[i - j * j] + 1); // 1���� ������ ���� : i���� ���� ���� ū ������
		}
	}
	cout << dp[n] << endl;
}