/*A와B를 입력받아 A+B를 출력*/
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