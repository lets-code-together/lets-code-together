/*단어개수구하기*/
#include <stdio.h>

int main() 
{
	char str[1000000];
	int count = 0;
	int i;
	int space = 1;
	scanf("%[^\n]s", str);

	for (i = 0; str[i]; i++) 
	{
		if (str[i] == ' ') space = 1;
		else if (space) 
		{
			space = 0;
			count++;
		}
	}
	printf("%d", count);
}