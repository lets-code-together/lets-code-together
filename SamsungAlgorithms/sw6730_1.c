/*sw 6730문제 푸는 중 다시 풀어야함*/
#include<stdio.h>

int main()
{
	int TC,N,max=0,min=0;
	int block[101] = { 0, };
	
	scanf("%d", &TC);
	
	for (int j = 1; j <= TC; j++)
	{
		scanf("%d", &N);
		for (int i = 1; i <= N; i++)
		{
			scanf("%d", &block[i]);
			
			
			if (block[i] - block[i + 1] > 0)
				if (block[i] - block[i + 1] > max)
					max = block[i] - block[i + 1];
			if (block[i] - block[i + 1] < 0)
				if (block[i] - block[i + 1] < min)
					min = block[i] - block[i + 1];
		}
		printf("#%d %d %d\n", j, max, min);
		max = 0; min = 0;
	}
	
}