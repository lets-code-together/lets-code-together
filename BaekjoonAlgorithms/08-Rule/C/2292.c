/*벌집의 중앙 1에서 N까지 최소방의개수를 거쳐서 갈때 거치는 방의 수를 출력하라*/
#include <stdio.h>

int main()
{
	int i, n, cnt = 1, temp = 1;
	scanf("%d", &n);

	if (n == 1)
		cnt = 1;
	else {
		for (i = 2; i <= n; i++)
		{
			if (temp + (cnt - 1) * 6 < i)
			{
				cnt++;
				temp = i - 1;
			}
		}
	}
	printf("%d\n", cnt);
}
