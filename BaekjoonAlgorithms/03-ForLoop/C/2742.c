/*N이 주어졌을 때, N~1까지 출력하기*/

#include <stdio.h>

int main()
{
	int n,i;
	scanf_s("%d", &n);
	
	for (int i = n; i >= 1; i--) {
		printf("%d\n", i);
	}
}
