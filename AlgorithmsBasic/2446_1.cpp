/*출력하여라
*********
 *******
  *****
   ***
	*
   ***
  *****
 *******
*********
*/
#include <iostream>
using namespace std;

//공백 : 0, 1, 2, 3, 4, 3, 2, 1, 0 별 : 9, 7, 5, 3, 1 ,3, 5 ,7 ,9
int main()
{
	int n, i, j; //i : 높이 j : 밑변
	cin >> n;
	//1행부터 5행까지
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			cout << " ";
		for (j = 2*i; j < 2 * n - 1; j++)
			cout << "*";
		cout << endl;
	}
	//6행부터 9행까지
	for (i = 1; i <= n - 1; i++)
	{
		for (j = i; j <= n - 2; j++)
			cout << " ";
		for (j = 0; j < 2 * i + 1; j++)
			cout << "*";
		cout << endl;
	}
}