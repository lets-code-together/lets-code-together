/*acmȣ�� �켱������ �´� �� ã��*/
#include <stdio.h>

int Room(int, int, int);
main()
{
	int T, H, W, N;
	int i;
	scanf("%d", &T);

	for (i = 0; i < T; i++) 
	{
		scanf("%d %d %d", &H, &W, &N);
		printf("%d\n", Room(H, W, N));
	}
}

int Room(int H, int W, int N) 
{
	int i;
	for (i = 1; i <= W; i++) 
	{
		for (int j = 1; j <= H; j++) 
		{
			if (((i - 1)*H + j) == N)
				return j * 100 + i;
		}
	}
}