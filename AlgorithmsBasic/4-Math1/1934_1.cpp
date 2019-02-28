/*최소공배수*/
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

	cin >> tc;

	for (int i = 0; i < tc; i++)
	{
		cin >> a >> b;

		cout << gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b)) << endl;
	}

	return 0;
}
