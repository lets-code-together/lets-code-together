/*���� n�� �־����� ��, n�� 1,2,3�� ������ ��Ÿ���� ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.(�˻� ��ȭ��)*/
#include <iostream>

using namespace std;

int N; 
int a[11]; //N<11

int method(void)
{

	a[1] = 1; 
	a[2] = 2; 
	a[3] = 4; 
	for (int i = 4; i <= N; i++)
	{
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	
	return a[N];
}

int main()
{
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++)
	{
		cin >> N;
		cout << method() << endl;
	}

	return 0;
}