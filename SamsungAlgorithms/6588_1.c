/**/
#include<stdio.h>
#define SIZE 1000000

int isNotPrime[SIZE];

void eratosthenes()
{
	for (int i = 2; i*i < SIZE; i++)
		if (!isNotPrime[i])
			for (int j = i * i; j < SIZE; j += i)
				isNotPrime[j] = 1;
	isNotPrime[1] = 1;
}

void goldbach(int n)
{
	int i, j, mid = n >> 1;

	for (i = 0, j = n; i <= mid; i++, j--)
		if (i % 2 == 1 && j % 2 == 1 && isNotPrime[i] && !isNotPrime[j])
		{
			printf("%d=%d+%d\n", n, i, j);
			return;
		}
	puts("Goldbach's conjecture is wrong.\n");
}

void main()
{
	eratosthenes();
	int n;
	while (1)
	{
		scanf("%d", &n);
		if (!n) break;
		goldbach(n);
	}
}
