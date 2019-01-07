/*연속된 o의 점수의 합*/
#include <stdio.h>
#include <string.h>

int main()
{
	int i, cnt = 0, sum = 0, n, length = 0, j;
	char OX[100] = " "; //문자열의 개수
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%s", OX);
		length = strlen(OX);
		
		sum = 0; cnt = 0;
		
		for(j = 0; j < length; j++)
		{
			if(OX[j] == 'X') //X일 경우 0으로 센다
				cnt = 0;
			else //O일경우 카운트를 세고 합해준다.
			{
				++cnt;
			    sum += cnt;
			}
		}
		
		printf("%d\n", sum);
	}
		

}