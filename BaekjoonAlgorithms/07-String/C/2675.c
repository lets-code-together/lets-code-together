/*���ڿ� S�� �� ���ڸ� R�� �ݺ��� �����ڿ�P ����*/
#include <stdio.h>
#include <string.h>

int main()
{
	int t, i, j, k, n, length;
	char str[30] = " ";
	
	scanf("%d", &t); //�ݺ�Ƚ�� �Է�
	
	for(i = 0; i < t; i++)
	{
		scanf("%d%s", &n, str);
		length = strlen(str);
		
		for(j = 0; j < length; j++)
		{
			for(k = 0; k < n; k++) //���� �ݺ�
				putchar(str[j]);
		}
		puts("");
	}
	
}