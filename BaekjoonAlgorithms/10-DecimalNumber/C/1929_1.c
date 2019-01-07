/*M이상 N이하의 소수를 모두 출력해라(기존의 for이중구문X,에라스토테네스O) */
#include<stdio.h>
int main()
{
	int M, N, i, j, a[1000001] = { 0, };
	a[1] = 1;
	scanf("%d %d", &M, &N);

	for (i = 2; i <= N; i++)
	{
		for (j = 2; i*j <= N; j++)
			a[j*i] = 1;
	}
	for (i = M; i <= N; i++)
		if (!a[i]) printf("%d\n", i);
}
