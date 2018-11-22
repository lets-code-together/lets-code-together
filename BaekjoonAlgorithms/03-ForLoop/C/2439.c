/*N번째 줄에 별 N개 출력하기(오른쪽 정렬)*/

#include <stdio.h>

int main()
{
	int n, i, j, k;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (k = n-1; k >= i; k--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
}