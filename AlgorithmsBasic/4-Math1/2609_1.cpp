/*�ִ� ������� �ּҰ���� ��Ŭ���� ȣ������ ����� �ִ����� ���ϱ�
 ��Ŭ���� ȣ���� : a = bq + r a�� b�� r�� �ִ� ������� ���� ū������ ���� ���� ���� �������� ������ �������� ������ �������� ������ �ʴ� �������϶� �� �������� �ִ������̴�.*/
#include<iostream>
using namespace std;

int gcd(int a, int b) //��Ŭ���� ȣ���� ��ͷ� ��Ÿ����
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int a, b;

	cin >> a >> b;
	cout << gcd(a, b) << endl;
	cout << gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b)) << endl;
	
	return 0;
}