/*5���� ������ �ް� 40�� �̸������� 40������ ����*/
#include <stdio.h>

int main()
{
    int score[5] = {0, }, i, sum = 0;
    
    for(i = 0; i < 5; i++)
	{
        scanf("%d", &score[i]);
        
        if(score[i] <= 40) //40�� �̸��� �л��� �׳� 40��
			score[i] = 40;
        
        sum += score[i];
    }
    
    printf("%d", sum/5);
}