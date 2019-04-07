/*0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.*/
#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int factorial = 1;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	cout << factorial;
}