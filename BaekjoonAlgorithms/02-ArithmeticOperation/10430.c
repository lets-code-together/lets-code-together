/*(A+B)%C�� (A%C + B%C)%C�� ������?*/
/*(AxB)%C�� (A%C x B%C)%C�� ������?*/

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