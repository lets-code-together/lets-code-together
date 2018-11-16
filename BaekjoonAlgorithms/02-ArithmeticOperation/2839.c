/*5Kg와 3kg단위 봉투 가장 적게 사용해서 N kg만들기*/
#include<stdio.h>

main()
{
	int N, a ,b;
	scanf("%d", &N);
	a = N / 5;
	b = N % 5;
	
	if ((b == 0) && (a >= 0))   { printf("%d", a); };
	if ((b == 1) && (a-1 >= 0)) { printf("%d", (a - 1) + 2); };
	if ((b == 2) && (a-2 >=0)) { printf("%d", (a - 2) + 4); };
	if ((b == 3) && (a >=0))   { printf("%d", a + 1); };
	if ((b == 4) && (a-1>=0)) { printf("%d", (a - 1) + 3); };
	
	
	return -1;
}