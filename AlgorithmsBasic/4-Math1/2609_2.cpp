/*�� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�(��Ŭ����ȣ�����˻�)*/
#include<iostream>
using namespace std;

int gcd(int a, int b) 
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