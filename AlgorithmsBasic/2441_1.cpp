/*첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제
하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.*/
#include<iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)//세로 줄을 위한 for문
	{
		for (j = 1; j < i; j++)//공백을 출력하기 위한 for문
		{
			cout << " ";
		}
		for (j = n; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}