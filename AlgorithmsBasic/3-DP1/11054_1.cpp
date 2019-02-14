/*���� �� ������� ����*/
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
	//���� �� �����ϴ� �κм���
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1; //�κм����� ũ�� 1�� �ʱ�ȭ

		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	for (int i = n - 1; i >= 0; i--) //�ڿ��� ���� �˻� �ʱⰪ�� n-1�� ������ 0���� �����̱� ������
	{
		r_dp[i] = 1;
		
		for (int j = n - 1; j >= i; j--)
		{
			if (a[j] < a[i])
				r_dp[i] = max(r_dp[i], r_dp[j] + 1);
		}
	}

	for (int i = 0; i < n; i++) //�����ϴ� �κм����� �����ϴ� �κм������� ���ڰ� ���� ū ���Ұ� ��ġ�� ������ �Ѱ��� ���ش�.
	{
		if (ans < dp[i] + r_dp[i] - 1)
			ans = max(dp[i] + r_dp[i] - 1, ans);
	}
	cout << ans << endl;
}