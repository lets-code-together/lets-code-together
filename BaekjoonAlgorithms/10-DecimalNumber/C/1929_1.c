/*M�̻� N������ �Ҽ��� ��� ����ض�(������ for���߱���X,�������׳׽�O */
#include<stdio.h>
main()
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