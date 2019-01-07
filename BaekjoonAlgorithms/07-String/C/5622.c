/*다이얼 걸때 걸리는 시간의 합*/
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[16];	
	int length, i, x = 0;
	
	gets(str);	
	
	length = strlen(str); 
	for (i = 0; i < length; i++) 
	{
		if (('A' <= str[i]) && (str[i] <= 'C'))
			x += 3;
		else if (('D' <= str[i]) && (str[i] <= 'F'))
			x += 4;
		else if (('G' <= str[i]) && (str[i] <= 'I'))
			x += 5;
		else if (('J' <= str[i]) && (str[i] <= 'L'))
			x += 6;
		else if (('M' <= str[i]) && (str[i] <= 'O'))
			x += 7;
		else if (('P' <= str[i]) && (str[i] <= 'S'))
			x += 8;
		else if (('T' <= str[i]) && (str[i] <= 'V'))
			x += 9;
		else if (('W' <= str[i]) && (str[i] <= 'Z'))
			x += 10;
	}
	printf("%d", x);
}
