/*연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성*/
#include <stdio.h>

int main() 
{
	int arr[8], a = 0, d = 0, m = 0, i;
	for (i = 0; i < 8; i++) 
	{
		scanf("%d", &arr[i]);
		if (i + 1 == arr[i])
			a++;
		else if (8 - i == arr[i])
			d++;

	}
	if (a == 8)
		printf("ascending");
	else if (d == 8)
		printf("descending");
	else
		printf("mixed");
}
