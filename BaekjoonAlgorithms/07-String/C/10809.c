/*�ܾ� S���� �� ���ĺ��� ������ ��ġ*/
#include<stdio.h>

int main()
{
	char S[101]; // �ܾ� S�� ������ ����
	char alphabet[26]; // ���ĺ��� ������ ����
	int position[26]; // �� ���ĺ�(26��)�� ���°�� ���������� ������ ���� 

	for (int i = 0; i < 26; i++) 
	{
		alphabet[i] = 'a' + i; // �迭�� a~z���� ����
		position[i] = -1; // result�� -1�� �ʱ�ȭ
	}

	scanf("%s", S); // �ܾ� S�� �Է� ����

	
	int j; // ���� �ε����� ����

	for (int i = 0; i < 26; i++) 
	{
		j = 0;
		while (1) //���ѷ���
		{ // �ܾ� S�� �� ���ھ� ���캸�ٰ�
			if (alphabet[i] == S[j]) 
			{ // �ܾ� S���� ���ĺ�(a~z)�� ������ ���  
				position[i] = j; // �� ��ġ ���� ����
				break; // ���� ó�� ������ ��ġ�� �˸� �ǹǷ� ���� �� Ż��
			}
			if (S[j] == '\0') 
				break; // �ܾ� S�� ��� Ȯ���� ��� Ż��
			j++;
		}
	}

	for (int i = 0; i < 26; i++ ) 
		printf("%d ", position[i]); //��� ���

	return 0;
}

