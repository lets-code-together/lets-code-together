/*N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
������İ� ���� N*1���� N*9���� ����Ѵ�.*/
#include<iostream>
using namespace std;

int main()
{
	int n, i;
	cin >> n;

	for (i = 1; i <= 9; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}