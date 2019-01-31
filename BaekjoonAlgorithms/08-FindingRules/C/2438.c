/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, n번째 줄에는 별 n개를 찍는 문제*/

#include <stdio.h>

int main(void)
{
	int n, l, s;
	scanf("%d", &n);
	for (l = 0; l < n; l++)
	{
		for (s = 0; s <= l; s++)
			printf("*");
		printf("\n");
	}
}