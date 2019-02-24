/*A와B입력받아 A+B*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, i, n;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << endl;
	}
	return 0;
}
