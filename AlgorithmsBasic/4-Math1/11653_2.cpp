/*
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.
N의 인수를 한 줄에 하나씩 증가하는 순서대로 출력한다.
*/
#include <iostream>
using namespace std;

int N;

int main() 
{
	cin >> N;

	for (int i = 2; i*i <= N; i++)//2부터시작해서 제곱한 값이 주어진 값보다 작거나 같을때까지 나눈다(검색)
	{
		while (N%i == 0)
		{
			cout << i << endl;
			N /= i;
		}
	}

	if (N > 1)
	{
		cout << N << endl;
	}

	return 0;
}