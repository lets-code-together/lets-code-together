/*N��° �ٿ� �� N�� ����ϱ�(������ ����)*/

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