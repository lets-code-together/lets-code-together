/*오름차순 ascending 내림차순 descending 둘다 아니면 mixed*/
#include <stdio.h>

int main()
{
	int arr[8], a = 0, d = 0, m = 0, i;
	
	for(i = 0; i < 8; i++)
	{
		scanf("%d", &arr[i]);
		
		if(i + 1 == arr[i]) //1부터 커질경우 오름차순
			a++;
		
		else if (8 - i == arr[i]) //아니면 내림차순
			d++;
	}
	
	if(a == 8)
		printf("ascending");
	
	else if (d == 8)
		printf("descending");
	
	else
		printf("mixed");
}