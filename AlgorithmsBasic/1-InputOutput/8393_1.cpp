/*n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է� : ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.
��� : 1���� n���� ���� ����Ѵ�.*/
#include <iostream>
using namespace std;

int main()
{
	int i, n, sum = 0;
	cin >> n;

	for(i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout << sum << endl;

	return 0;
}