/*ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, n��° �ٿ��� �� n���� ��� ����*/

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