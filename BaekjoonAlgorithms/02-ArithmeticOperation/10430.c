/*(A+B)%C는 (A%C + B%C)%C와 같을까?*/
/*(AxB)%C는 (A%C x B%C)%C와 같을까?*/

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d\n", (a + b) % c);
	printf("%d\n", (a % c + b % c) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", (a % c * b % c) % c);

	return 0;
}