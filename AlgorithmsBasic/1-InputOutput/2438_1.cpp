/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
출력 : 첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}