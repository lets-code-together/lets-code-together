/*내림차순*/
#include <stdio.h>
#include <string.h>

int main()
{
	
    char str[13] = " ", temp;
	int i, j, length;
	
	gets(str);
	
	length = strlen(str);
	
	for(i = 0; i < length; i++)
	{
		for(j = 0; j < length; j++)
		{
			
			if(str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	
	puts(str);
}