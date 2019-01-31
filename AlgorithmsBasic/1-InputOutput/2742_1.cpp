/*자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.*/
#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = n; 1 <= i; i--)
		cout << i << endl;

	return 0;
}