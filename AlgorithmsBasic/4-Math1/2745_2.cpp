/*
B���� �� N�� �־�����. �� ���� 10�������� �ٲ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
10������ �Ѿ�� ������ ���ڷ� ǥ���� �� ���� �ڸ��� �ִ�. �̷� ��쿡�� ������ ���� ���ĺ� �빮�ڸ� ����Ѵ�.
A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
ù° �ٿ� N�� B�� �־�����. (2 �� B �� 36)
B���� �� N�� 10�������� �ٲٸ�, �׻� 10�ﺸ�� �۰ų� ����.
ù° �ٿ� B���� �� N�� 10�������� ����Ѵ�.	
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	int x = 0;
	int b;

	cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
	{
		if ('0' <= a[i] && a[i] <= '9')
		{
			x = x * b + a[i] - '0';
		}
		else
		{
			x = x * b + (a[i] + 10 - 'A');
		}
	}
	
	cout << x << endl;
	
	return 0;
}