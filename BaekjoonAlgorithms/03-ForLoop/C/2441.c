/*ù��° �ٿ� N�� ~ N��° �ٿ� 1�� ����ϱ�(������ ����)*/

#include <stdio.h>

int main()
{
	int n, i, j, k;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (k = 2; k <= i; k++) {
			printf(" ");
		}
		for (j = n; j >= i; j--) {
			printf("*");
		}
		puts("");
	}
}