/*ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. 
��° �ٿ� ���� N���� ������� �־�����. �Է����� �־��� ���� N���� ���� ����Ѵ�.*/
#include <iostream>
using namespace std;

int main()
{
	int n, a, i;
	int sum = 0;
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		scanf("%1d", &a);
		sum += a;
	}
	cout << sum << endl;

	return 0;
}