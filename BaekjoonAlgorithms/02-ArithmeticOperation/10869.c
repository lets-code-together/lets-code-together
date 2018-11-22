/*A와 B는 자연수일 때, A+B, A-B, A*B, A/B, A%B 출력하기*/

#include <stdio.h>

int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);

	return 0;
}