/*
�� �ڿ��� A�� B�� �־����� ��, A�� B�� �ּҰ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����.
��° �ٺ��� T���� �ٿ� ���ļ� A�� B�� �־�����. (1 �� A, B �� 45,000)
ù° �ٺ��� T���� �ٿ� A�� B�� �ּҰ������ �Է¹��� ������� �� �ٿ� �ϳ��� ����Ѵ�.
*/
/*
#include<iostream>
using namespace std;

int tc, a, b, max, min;

int gcd(int a, int b)//�ִ����� �Լ�
{
	if (a >= b)
	{
		max = a; min = b;
	}
	else
	{
		max = b; min = a;
	}

	if (max%min == 0)
	{
		return min;
	}
	else
	{
		return gcd(min, max%min);
	}
}

int main()
{
	cin >> tc;

	for (int i = 0; i < tc; i++)
	{
		cin >> a >> b;

		cout << gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b)) << endl;
	}

	return 0;
}

*/
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
	int tc, a, b;

	

	return 0;
}