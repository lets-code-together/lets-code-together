/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j, k;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = n - 1; j >= i; j--)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{		
			cout << "*";
		}
		
		cout << endl;
	}
	
}