/* O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. ������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. */
#include<stdio.h>
#include<string.h>
char OX[82];

int main()
{
	int test, score, sum;

	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		sum = 0;
		score = 1;
		scanf("%s", &OX);
		for (int j = 0; j < strlen(OX); j++)
		{
			if (OX[j] == 'O')
			{
				sum += score;
				score++;
			}
			if (OX[j] == 'X')
				score = 1;
		}
		printf("%d\n", sum);
	}
}