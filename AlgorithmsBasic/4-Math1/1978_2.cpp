/*
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
(에라토스테네스의체 검색)(숫자가 커질경우 소수찾을때 에라토스테네스의체 이용)
*/

#include <iostream>
#include <cmath>

using namespace std;
const int MAX = 100;

int minFactor[1001]; //i의 가장 작은 소인수(i가 소수인 경우 자기 자신)

void eratosthenes(void)

{
	minFactor[0] = minFactor[1] = -1;
	for (int i = 2; i <= 1001; i++)
	{
		minFactor[i] = i;
	}
	int sqrtN = int(sqrt(1001));
	for (int i = 2; i <= sqrtN; i++)
	{
		if (minFactor[i] == i)
		{
			for (int j = i * i; j <= 1001; j += i)
			{
				if (minFactor[j] == j)
					minFactor[j] = i;
			}
		}

	}
}

int main()
{
	int N;
	cin >> N;
	int cnt = 0;

	eratosthenes();

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (minFactor[num] == num)
		{
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}