/*알파벳 위치 나타내기*/
#include <stdio.h>

main() 
{
	int i, j;
	char str[101] = { 0, };
	int ar[27] = { 0, };

	for (i = 0; i < 27; i++)
	{
		ar[i] = -1;
	}
	scanf("%s", str);
	for (j = 0; j < 101; j++) 
	{
		if (ar[str[j] - 'a'] == -1 && str[j] >= 'a'&&str[j] <= 'z') 
		{
			ar[str[j] - 'a'] = j;
		}
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", ar[i]);
	}
}