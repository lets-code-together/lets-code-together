/*요일구하기(윤년은고려하지않는다)*/
#include<stdio.h>
main()
{
	int x = 0, y = 0;
	int day = 0;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d", &x, &y);

	day += y;
	for (int i = 1; i < x; i++)
	{
		day += month[i - 1];		
	}

	switch (day%7)
	{
		case 0: printf("SUN\n"); break;
		case 1: printf("MON\n"); break;
		case 2: printf("TUE\n"); break;
		case 3: printf("WED\n"); break;
		case 4: printf("THU\n"); break;
		case 5: printf("FRI\n"); break;
		case 6: printf("SAT\n"); break;
	}
}