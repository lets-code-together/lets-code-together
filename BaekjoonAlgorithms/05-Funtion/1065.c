/*한수 양의 정수의 자리수가 등차수열을 이룬것*/
#include <stdio.h>
 
int main(void)
{
	int N,cnt;
	int a, b, c;
    scanf("%d", &N);
 
    if (N < 100)
		printf("%d", N);
	else
    {
	   cnt = 99;
       for (int i = 100; i <= N; i++)
       {
		   a = i / 100;        // 100의 자리
           b = (i / 10) % 10;  // 10의 자리
           c = i % 10;         // 1의 자리
 
		   if ((a - b) == (b - c))
           cnt++;
        
       }
	   printf("%d", cnt);
    }
	return 0;
}

