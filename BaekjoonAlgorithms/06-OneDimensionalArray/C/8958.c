/* O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. */
#include<stdio.h>
#include<string.h>
char OX[82];

int main()
{
	int test, score, sum;

	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		sum = 0;
		score = 1;
		scanf("%s", &OX);
		for (int j = 0; j < strlen(OX); j++)
		{
			if (OX[j] == 'O')
			{
				sum += score;
				score++;
			}
			if (OX[j] == 'X')
				score = 1;
		}
		printf("%d\n", sum);
	}
}