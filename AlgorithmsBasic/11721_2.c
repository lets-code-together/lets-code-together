/*파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다. 한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.*/
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
