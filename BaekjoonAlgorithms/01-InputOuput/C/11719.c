/*그대로 출력하기(공백O)*/

#include <stdio.h>

int main()
{
	char str[101];
	while (gets(str)!='\0')
		puts(str);
	return 0;
}
