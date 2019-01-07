/*f층,h호일때 값(f-1층의 1호부터 h호까지의합)을구해라*/
#include <stdio.h>

int main() 
{
	int kn[15][15] = { 0, };
	int i, j, k;
	int t;
	int f, h;
	for (i = 1; i <= 14; i++) 
	{
		kn[0][i] = i;
	}
	for (i = 1; i <= 14; i++) 
	{
		for (j = 1; j <= 14; j++) 
		{
			for (k = 1; k <= j; k++) 
			{
				kn[i][j] += kn[i - 1][k];
			}
		}
	}
	scanf("%d", &t);
	for (i = 0; i < t; i++) 
	{
		scanf("%d", &f);
		scanf("%d", &h);
		printf("%d", kn[f][h]);
		if (i != t - 1) 
		{
			printf("\n");
		}
	}
}
