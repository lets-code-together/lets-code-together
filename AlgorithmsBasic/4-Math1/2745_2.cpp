/*
B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.
10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다. 이런 경우에는 다음과 같이 알파벳 대문자를 사용한다.
A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
첫째 줄에 N과 B가 주어진다. (2 ≤ B ≤ 36)
B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
첫째 줄에 B진법 수 N을 10진법으로 출력한다.	
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	int x = 0;
	int b;

	cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
	{
		if ('0' <= a[i] && a[i] <= '9')
		{
			x = x * b + a[i] - '0';
		}
		else
		{
			x = x * b + (a[i] + 10 - 'A');
		}
	}
	
	cout << x << endl;
	
	return 0;
}