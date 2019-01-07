/*한 문장에서의 단어의 개수*/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000003] = " "; //문자열의 길이
	int i, cnt = 0, length = 0;
	
	gets(str);
	
	length = strlen(str);
	
	for(i = 0; i < length; i++)
	{
		if(str[i] == ' ') //단어 하나당 띄어쓰기 하나
			cnt++;	
	}
	if(str[0] == ' ') //맨 처음 공백이 올 경우 빼준다
		cnt--;
		
	if (str[length - 1] == ' ') //맨 끝에 공백이 올 경우 빼준다
		cnt--;
	
	printf("%d", cnt + 1);
}