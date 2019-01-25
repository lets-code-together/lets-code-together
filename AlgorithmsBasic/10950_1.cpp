/*첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)*/
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