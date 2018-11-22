/*1~n까지 합 구하기*/

#include <stdio.h>

int main()
{
	int n,i,sum = 0;
	scanf_s("%d", &n);
	
	for (i = 1; i <= n; i++) {
		sum+=i;
	}
	printf("%d", sum);
}
