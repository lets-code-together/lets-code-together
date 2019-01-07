/*세 개의 자연수를 곱했을 경우 0부터9까지의 개수*/
#include <stdio.h>

int main()
{
    int a,b,c;
    int x;
    char num[11]={0,};
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=a*b*c;
    
	while(x>0) //1의자리숫자의 개수
	{
        num[x%10]++;
		x=x/10;
	}
    printf("%d\n",num[0]);
    printf("%d\n",num[1]);
    printf("%d\n",num[2]);
    printf("%d\n",num[3]);
    printf("%d\n",num[4]);
    printf("%d\n",num[5]);
    printf("%d\n",num[6]);
    printf("%d\n",num[7]);
    printf("%d\n",num[8]);
    printf("%d\n",num[9]);
}
