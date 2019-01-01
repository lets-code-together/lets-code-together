/*5명의 점수를 받고 40점 미만점수는 40점으로 고정*/
#include <stdio.h>

int main()
{
    int score[5] = {0, }, i, sum = 0;
    
    for(i = 0; i < 5; i++)
	{
        scanf("%d", &score[i]);
        
        if(score[i] <= 40) //40점 미만의 학생은 그냥 40점
			score[i] = 40;
        
        sum += score[i];
    }
    
    printf("%d", sum/5);
}