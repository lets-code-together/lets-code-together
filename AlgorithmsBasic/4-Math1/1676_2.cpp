/*
N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
첫째 줄에 N이 주어진다. (0 ≤ N ≤ 500)
첫째 줄에 구한 0의 개수를 출력한다.
*/
#include <iostream>
using namespace std;

int main()//결국에는 주어진값 소인수분해 했을때 2와 5의 갯수 구하기(검색) 
{
	int N, cnt = 0, cnt2 = 0, cnt5 = 0, tmp;
	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		tmp = i;

		while (tmp % 5 == 0)
		{
			tmp /= 5;
			cnt5++;
		}

		while (tmp % 2 == 0)
		{
			tmp /= 2;
			cnt2++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cnt5--;
		cnt2--;
		cnt++;
		if (cnt5 == 0 || cnt2 == 0)
		{
			break;
		}
	}
	cout << cnt;
}