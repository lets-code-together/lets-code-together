/*A와B입력받아서 A+B*/
#include<iostream>
using namespace std;

int main()
{
	int a, b, i, n;
	char c;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a >> c >> b;
		cout << a + b << endl;
	}
	return 0;
}
