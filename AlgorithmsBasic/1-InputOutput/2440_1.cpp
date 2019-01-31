/*첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= i; j--)
			cout << "*";
		cout << endl;
	}
}