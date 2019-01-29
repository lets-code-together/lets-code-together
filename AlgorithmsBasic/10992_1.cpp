/* 
   *
  * *
 *   *
*******
*/

#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	//1행
	for (i = 0; i < n - 1; i++)
	{
		cout << " ";
	}
	cout << "*" << endl;
	
	//2행 부터 n-1행까지 
	if (n > 1)
	{
		for (i = 1; i < n - 1; i++)
		{
			for (j = i-1; j < n - 2; j++)
			{
				cout << " ";
			}
			cout << "*";
			for (j = 0; j < 2 * i - 1; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
	}

	//마지막 행
	if (n != 1)
	{
		for (i = 0; i < 2 * n - 1; i++)
			cout << "*";
	}
	return 0;

}
