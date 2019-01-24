#include<stdio.h>
#include<string.h>

int main()
{
	char str[99] = { 0, };
	scanf("%s", str);

	printf("%c", str[0]);
	for (int i = 1; i < strlen(str); i++)
	{
		if (i % 10 == 0) printf("\n%c",str[i]);
		else printf("%c", str[i]);
	}
	return 0;
}