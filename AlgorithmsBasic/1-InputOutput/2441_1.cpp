/*ù° �ٿ��� �� N��, ��° �ٿ��� �� N-1��, ..., N��° �ٿ��� �� 1���� ��� ����
������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.*/
#include<iostream>
using namespace std;

int main()
{
	int n, i, j;
	cin >> n;

	for (i = 1; i <= n; i++)//���� ���� ���� for��
	{
		for (j = 1; j < i; j++)//������ ����ϱ� ���� for��
		{
			cout << " ";
		}
		for (j = n; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}