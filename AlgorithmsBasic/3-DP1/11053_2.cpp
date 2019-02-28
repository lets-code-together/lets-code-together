/*
수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.
예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 
가장 긴 증가하는 부분 수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.(검색)
*/
#include<iostream>
#include<algorithm>

using namespace std;

int n, d[1001], a[1001], ans;

int main() 
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) 
	{
		d[i] = 1;
		for (int j = 0; j < i; j++)
		{	
			if (a[i] > a[j])
			{
				d[i] = max(d[i], d[j] + 1);
			}
		}
		ans = max(ans, d[i]);
	}
	cout << ans << endl;

	return 0;
}
