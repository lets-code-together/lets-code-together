/* 모양을 출력하여라
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, j; //i : 높이 j : 밑변길이
	cin >> n;

	for (i = 0; i < n; i++) //1행부터 5행까지 1열부터 5열까지
	{
		for (j = 0; j <= i; j++)
			cout << "*";
		for (j = 2*n-2; j > 2*i; j--) //공백 8개부터 시작해서 높이에 따라 2개씩 공백이 줄어든다.
			cout << " ";
		for (j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	
	for (i = 1; i < n; i++) //6행부터 9행까지
	{
		for (j = n-1; j >= i; j--)
			cout << "*";
		for (j = 1; j <= 2*i; j++)
			cout << " ";
		for (j = n - 1; j >= i; j--)
			cout << "*";
		cout << endl;
	}
	return 0;
}