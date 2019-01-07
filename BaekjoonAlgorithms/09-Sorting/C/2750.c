/*오름차순 정렬하기(버블정렬)*/
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)

void bubble(int a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
				swap(int, a[j - 1], a[j]);
		}
	}
}

int main()
{
	int i, nx;
	int *x;

	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
		scanf_s("%d", &x[i]);
	
	bubble(x, nx);

	for (i = 0; i < nx; i++)
		printf("%d\n", x[i]);
	
	free(x);

	return 0;
}
