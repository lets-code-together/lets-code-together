/*A�� B�� �ڿ����� ��, A+B, A-B, A*B, A/B, A%B ����ϱ�*/

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