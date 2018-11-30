/*결과의 숫자가 각각 몇 번 쓰였는지 구하기*/

#include <stdio.h>

int main()
{
	int a, b, c;
	int arr[10] = { 0 };
	scanf_s("%d %d %d", &a, &b, &c);
	int mul = a * b * c;

	while (mul)
	{
		arr[mul % 10]++;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}
