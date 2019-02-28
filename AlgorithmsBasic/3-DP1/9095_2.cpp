/*정수 n이 주어졌을 때, n을 1,2,3의 합으로 나타내는 방법의 수를 구하는 프로그램을 작성하시오.(검색 점화식)*/
#include <iostream>

using namespace std;

int N; 
int a[11]; //N<11

int method(void)
{

	a[1] = 1; 
	a[2] = 2; 
	a[3] = 4; 
	for (int i = 4; i <= N; i++)
	{
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}
	
	return a[N];
}

int main()
{
	int test_case;
	cin >> test_case;

	for (int i = 0; i < test_case; i++)
	{
		cin >> N;
		cout << method() << endl;
	}

	return 0;
}