#include <stdio.h>
 
int main(void)
{
    int N,cnt;
    int a, b, c;
    scanf("%d", &N);
 
    if (N < 100)
    {
        printf("%d", N);
    }
    else
    {
        cnt = 99;
        for (int i = 100; i <= N; i++)
        {
            a = i / 100;        // 100�� �ڸ�
            b = (i / 10) % 10;    // 10�� �ڸ�
            c = i % 10;            // 1�� �ڸ�
 
            if ((a - b) == (b - c))
            {
                cnt++;
            }
        }
        printf("%d", cnt);
    }
    return 0;
}

