/*첫번째 줄에 N개 ~ N번째 줄에 1개 출력하기*/

#include <stdio.h>

int main()
{
	int n, i, j;
	scanf_s("%d", &n);
	
	for (i = n; i >= 1; i--) {
		for (j = i; j >= 1; j--) {
			printf("*");
		}
		puts("");
	}
}
