/*���ϱ� ����Ŭ ���� ���ϱ�*/

#include <stdio.h>

int main()
{
	int i;
	int n[1001] = { 0, };
	scanf_s("%d", &n[0]);
	for (i = 1;; i++) {
		n[i] = (n[i - 1] % 10) * 10 + ((n[i - 1] / 10) + (n[i - 1] % 10)) % 10;
		if (n[i] == n[0]) {
			break;
		}
	}
	printf("%d", i);

	return 0;
}