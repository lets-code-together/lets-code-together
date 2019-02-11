/*첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제
별은 가운데를 기준으로 대칭이어야 한다.
	*
   ***
  *****
 *******
********* */
#include <iostream>
using namespace std;

//공백 n-1,~,4,3,2,1,0 별 1,3,5,7,~,(2*n-1)
int main()
{
	int n, i, j;
	cin >> n;
	
	//세로 줄을 위한 for문
	for(i = 1; i <= n; i++)
	{
		//공백을 위한 for문
		for (j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		//*을 찍기 위한 for문
		for (j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
}