/*ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. A�� B�� �޸�(,)�� ���еǾ� �ִ�. (0 < A, B < 10)*/
#include<iostream>
using namespace std;

int main()
{
	int a, b, i, n;
	char c;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a >> c >> b;
		cout << a + b << endl;
	}
	return 0;
}