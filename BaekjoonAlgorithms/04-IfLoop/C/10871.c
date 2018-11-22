/*정수 N개로 이루어진 수열 A와 정수 X가 주어질 때 A에서 X보다 작은 수를 모두 출력하기*/

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