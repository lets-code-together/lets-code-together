/*N번째 줄에 별 N개 출력하기*/

#include <stdio.h>

int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
}
