/*ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����*/
#include <stdio.h>
main()
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}