/*ù��° �ٿ� N�� ~ N��° �ٿ� 1�� ����ϱ�  */

#include <stdio.h>

int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1; j--) {
			printf("*");
		}
		puts("");
	}
}