/*ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����*/
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