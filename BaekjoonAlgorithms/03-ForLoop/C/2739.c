/*구구단 N단 출력하기*/

#include <stdio.h>

int main()
{
	int n,i;
	scanf_s("%d", &n);
	
	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n*i);
	}
}
