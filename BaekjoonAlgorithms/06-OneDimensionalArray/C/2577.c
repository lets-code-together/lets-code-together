/*�ڿ��� A, B, C�� �־��� �� A��B��C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� �������� ���϶�*/
#include <stdio.h>
int main() 
{
	int a, b, c, cnt[10] = { 0, };
	int result = 0;
	scanf("%d %d %d", &a, &b, &c);
	result = a * b*c;
	while (result > 0) 
	{
		switch (result % 10) 
		{
		case 0:
			cnt[0]++;
			break;
		case 1:
			cnt[1]++;
			break;
		case 2:
			cnt[2]++;
			break;
		case 3:
			cnt[3]++;
			break;
		case 4:
			cnt[4]++;
			break;
		case 5:
			cnt[5]++;
			break;
		case 6:
			cnt[6]++;
			break;
		case 7:
			cnt[7]++;
			break;
		case 8:
			cnt[8]++;
			break;
		case 9:
			cnt[9]++;
			break;
		}
		result /= 10;
	}
	int i = 0;
	while (i < 10) 
	{
		printf("%d\n", cnt[i]);
		i++;
	}
	return 0;
}