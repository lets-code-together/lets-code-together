/*ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.
�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
�� �׽�Ʈ ���̽����� "Case #x: "�� ����� ����, A+B�� ����Ѵ�. �׽�Ʈ ���̽� ��ȣ�� 1���� �����Ѵ�.*/
#include <iostream>
using namespace std;

int main(void)
{
	int a, b, i, n;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": "<< a + b << endl;
	}
	return 0;
}