/*그대로 출력하기(공백X)*/

#include <stdio.h>

int main()
{
	char input[101];
	while (fgets(input, 101, stdin))
		printf("%s", input);
	return 0;
}
