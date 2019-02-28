/*양의 정수 n개가 주어졌을 때, 가능한 모든 쌍의 GCD의 합을 구하는 프로그램을 작성하시오.(이것도유클리드호제법)*/
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
		{
			cin >> arr[i];
		}
		
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
