/*두 정수 A와 B를 입력받은 다음 A/B 출력하기*/

#include <stdio.h>

int main()
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	printf("%.9lf", a / b);

	return 0;
}
