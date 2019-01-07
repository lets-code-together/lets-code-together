/*자연수 M,N이 주어질때 M이상 N이하의 소수의 합과 가장작은 소수를 구하라*/
#include<stdio.h>

int main()
{
	int M, N, cnt = 0, sum = 0, min = 10001;
	scanf("%d\n%d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
				cnt++;
		}
		if (cnt == 0 && i != 1)
		{
			sum += i;
			if (min > i)
				min = i;
		}
		cnt = 0;
	}
	if (min == 10001)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);
}
