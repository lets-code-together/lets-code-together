/*평균점수 구하기*/

#include <stdio.h>

int main()
{
	int arr[5];
	int i;
	int sum = 0;
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	for (i = 0; i < 5; i++)
	{
		if (arr[i] >= 40)
			sum += arr[i];
		else
			sum += 40;
	}
	printf("%d", sum / 5);

	return 0;
}
