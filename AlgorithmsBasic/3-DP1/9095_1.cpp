/*숫자를 1,2,3을 적절히 이용하여 합으로 표현할 수 있는 경우의 수*/
#include <iostream>
using namespace std;

int d[11];
int main(void) 
{
	int t;
	cin >> t;

	while (t--) 
	{
		int n;
		cin >> n;
		d[1] = 1;
		d[2] = 2;
		d[3] = 4;
		
		for (int i = 4; i <= n; i++)
		{
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}
		cout << d[n] << '\n';
	}
	return 0;
}
