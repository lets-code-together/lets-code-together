/*첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 
둘째 줄에 숫자 N개가 공백없이 주어진다. 입력으로 주어진 숫자 N개의 합을 출력한다.*/
#include <iostream>
using namespace std;

int main()
{
	int n, a, i;
	int sum = 0;
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		scanf("%1d", &a);
		sum += a;
	}
	cout << sum << endl;

	return 0;
}