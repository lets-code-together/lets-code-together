/*A+B입력받아서 A+B출력*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, i, num;
	cin >> num;

	for (i = 0; i < num; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
