/*0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int factorial = 1;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	cout << factorial;
}