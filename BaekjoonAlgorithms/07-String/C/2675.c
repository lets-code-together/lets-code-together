/*문자열 S의 각 문자를 R번 반복해 새문자열P 생성*/
#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, j, k, n, length;
	char str[30] = " ";
	
	scanf("%d", &t); //반복횟수 입력
	
	for(i = 0; i < t; i++)
	{
		scanf("%d%s", &n, str);
		length = strlen(str);
		
		for(j = 0; j < length; j++)
		{
			for(k = 0; k < n; k++) //문자 반복
				putchar(str[j]);
		}
		puts("");
	}
	
}