/*���� N���� �̷���� ���� A�� ���� X�� �־��� �� A���� X���� ���� ���� ��� ����ϱ�*/

#include <stdio.h>

int main()
{
	int n, x, i, check, cnt = 0;
	scanf_s("%d %d", &n, &x);

	for (i = 0; i < n; i++) {
		scanf_s("%d", &check);
		if (check < x) {
			if (cnt == 0) {
				printf("%d", check);
			}
			else {
				printf(" %d", check);
			}
			cnt++;
		}
	}
	printf("\n");

	return 0;

}