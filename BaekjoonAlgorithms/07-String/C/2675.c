/*각 문자 n번 반복해서 다시 출력하기*/
#include <stdio.h>

int main() 
{
	int n, r;
	scanf("%d", &n);
	char str[21] = { 0, };
	int i, j, k;
	for (i = 0; i < n; i++) 
	{
		scanf("%d %s", &r, str);
		for (j = 0; str[j] != 0; j++) 
		{
			for (k = 0; k < r; k++) 
{
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
}
