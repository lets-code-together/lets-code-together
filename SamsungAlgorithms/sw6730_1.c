#include<stdio.h>
#include<stdlib.h>//절대값 함수

int main()
{
	int TC, N, max = 0, min = 0;//TC는 테스트케이스,N은 블럭의 개수
	int block[101] = { 0, };

	scanf("%d", &TC);

	for (int j = 1; j <= TC; j++)
	{
		scanf("%d", &N);
		for (int i = 1; i <= N; i++)
		{
			scanf("%d", &block[i-1]);
		}
		for (int k = 0; k < N-1; k++)
		{
			if (block[k] - block[k + 1] > 0)
				if (block[k] - block[k + 1] > min)
					min = block[k] - block[k + 1];
			if (block[k] - block[k + 1] < 0)
				if (block[k] - block[k + 1] <= max)
					max = block[k] - block[k + 1];
		}
		printf("#%d %d %d\n", j, abs(max), min);
		max = 0; min = 0;
	}
	return 0;
}
