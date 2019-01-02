/*M과 N사이의 소수 찾기*/
#include <stdio.h>

int Sosu(int n);

int main()
{
    int i;
    int Min = 0;
    int Sum = 0;
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);
    for(i = M; i <= N; i++)
	{
        if(Sosu(i))
		{
            if(Min == 0)
			{
				Min = i;
                Sum += i;
            }else
                Sum += i;
        }
    }
    if(Min != 0)
	{
        printf("%d\n%d", Sum, Min);
    }else
		printf("-1");
}

int Sosu(int n)
{
    int i;
    if(n == 1) return 0;
    if(n == 2) return 1;
    for(i = 2; i < n; i++)
	{
        if(n % i == 0)
            return 0;

    }
    return 1;
}