/*�ڿ��� M,N�� �־����� M�̻� N������ �Ҽ��� �հ� �������� �Ҽ��� ���϶�*/
#include<stdio.h>
int main()
{
	int M, N, cnt = 0, sum = 0, min = 10001;
	scanf("%d\n%d", &M, &N);

	for (int i = M; i <= N; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
				cnt++;
		}
		if (cnt == 0 && i != 1)
		{
			sum += i;
			if (min > i)
				min = i;
		}
		cnt = 0;
	}
	if (min == 10001)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);
}