/*N이 주어졌을 때 1~N까지 출력하기*/

#include <stdio.h>

int main()
{
	int n,i;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d\n", i);
	}
}