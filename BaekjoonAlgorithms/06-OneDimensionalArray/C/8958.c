/*���ӵ� o�� ������ ��*/
#include <stdio.h>
#include <string.h>

int main()
{
	int i, cnt = 0, sum = 0, n, length = 0, j;
	char OX[100] = " "; //���ڿ��� ����
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%s", OX);
		length = strlen(OX);
		
		sum = 0; cnt = 0;
		
		for(j = 0; j < length; j++)
		{
			if(OX[j] == 'X') //X�� ��� 0���� ����
				cnt = 0;
			else //O�ϰ�� ī��Ʈ�� ���� �����ش�.
			{
				++cnt;
			    sum += cnt;
			}
		}
		
		printf("%d\n", sum);
	}
		
}