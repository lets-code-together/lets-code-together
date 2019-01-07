/*40점이상은 그대로 40점미만은 40점이라 할때 5명의 점수 평균을 구해라*/
#include <stdio.h>

int main() 
{
	int num, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		if (num < 40)
		{
			sum += 40;
		}
		else
			sum += num;
	}
	printf("%d\n", sum / 5);
}
