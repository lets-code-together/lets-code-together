/*이친 수*/
#include<iostream>
using namespace std;

long long int d[90];
int main()
{
	int n;
	cin >> n;

	d[1] = 1;
	d[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		d[i] = d[i - 2] + d[i - 1];
	}

	cout << d[n] << endl;
	return 0;
}
