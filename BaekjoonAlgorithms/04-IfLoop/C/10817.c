/*두번째로 큰 정수 출력하기*/

#include <stdio.h>

int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c && b >= c)
		printf("%d", b);
	else if (a >= b && a >= c && c >= b)
		printf("%d", c);
	else if (b >= a && b >= c && c >= a)
		printf("%d", c);
	else if (b >= a && b >= c && a >= c)
		printf("%d", a);
	else if (c >= a && c >= b && b >= a)
		printf("%d", b);
	else
		printf("%d", a);
	return 0;
}