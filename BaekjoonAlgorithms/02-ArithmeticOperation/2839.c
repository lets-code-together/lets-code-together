/*3kg������ 5kg������ ���� ��, �ִ��� ���� ��� �� �� �ִ� ���� �� ���ϱ�*/

#include <stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if ((3 * i) + (5 * j) == n) {
				printf("%d", i + j);
				return 0;
			}
		}
	}
	printf("-1");

	return 0;
}