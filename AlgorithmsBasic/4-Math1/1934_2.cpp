/*
두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.
첫째 줄에 테스트 케이스의 개수 T(1 ≤ T ≤ 1,000)가 주어진다.
둘째 줄부터 T개의 줄에 걸쳐서 A와 B가 주어진다. (1 ≤ A, B ≤ 45,000)
첫째 줄부터 T개의 줄에 A와 B의 최소공배수를 입력받은 순서대로 한 줄에 하나씩 출력한다.
*/
/*
#include<iostream>
using namespace std;

int tc, a, b, max, min;

int gcd(int a, int b)//최대공약수 함수
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