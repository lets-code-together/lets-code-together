/*A��B�� �Է¹޾� A+B���*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, i, n;
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	}
	return 0;
}