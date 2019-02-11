/*첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, i, n;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": "<< a + b << endl;
	}
	return 0;
}
