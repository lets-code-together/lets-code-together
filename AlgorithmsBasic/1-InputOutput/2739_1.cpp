/*N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
출력형식과 같게 N*1부터 N*9까지 출력한다.*/
#include<iostream>
using namespace std;

int main()
{
	int n, i;
	cin >> n;

	for (i = 1; i <= 9; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}