/*�� ���忡���� �ܾ��� ����*/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000003] = " "; //���ڿ��� ����
	int i, cnt = 0, length = 0;
	
	gets(str);
	
	length = strlen(str);
	
	for(i = 0; i < length; i++)
	{
		if(str[i] == ' ') //�ܾ� �ϳ��� ���� �ϳ�
			cnt++;	
	}
	if(str[0] == ' ') //�� ó�� ������ �� ��� ���ش�
		cnt--;
		
	if (str[length - 1] == ' ') //�� ���� ������ �� ��� ���ش�
		cnt--;
	
	printf("%d", cnt + 1);
}