/*���� ���� n���� �־����� ��, ������ ��� ���� GCD�� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.(�̰͵���Ŭ����ȣ����)*/
#include <iostream>
using namespace std;

int t, n, arr[1000001], sum;

int gcd(int arr, int b)
{
	if (b == 0) { return arr; }
	return gcd(b, arr%b);
}
int main() {
	cin >> t;
	while (t--)
	{
		sum = 0;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> arr[i];
		for (int i = 1; i <= n - 1; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				sum += gcd(arr[i], arr[j]);
			}
		}
		cout << sum << '\n';
	}
}