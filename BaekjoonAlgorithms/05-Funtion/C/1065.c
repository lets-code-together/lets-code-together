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
 
<<<<<<< HEAD:BaekjoonAlgorithms/05-Funtion/C/1065.c
		   if ((a - b) == (b - c))
               cnt++;
=======
	    if ((a - b) == (b - c))
                cnt++;
>>>>>>> 0b7409a7dac736315747680dbacd5b34589d48c6:BaekjoonAlgorithms/05-Funtion/1065.c
        
        }
	    printf("%d", cnt);
     }
         return 0;
}

