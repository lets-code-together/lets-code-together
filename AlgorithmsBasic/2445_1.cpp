/* ����� ����Ͽ���
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
	int n, i, j; //i : ���� j : �غ�����
	cin >> n;

	for (i = 0; i < n; i++) //1����� 5����� 1������ 5������
	{
		for (j = 0; j <= i; j++)
			cout << "*";
		for (j = 2*n-2; j > 2*i; j--) //���� 8������ �����ؼ� ���̿� ���� 2���� ������ �پ���.
			cout << " ";
		for (j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	
	for (i = 1; i < n; i++) //6����� 9�����
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