/*2007년 x월 y일의 요일 구하기*/

#include <stdio.h>

int main()
{
	int x, y;
	scanf_s("%d %d", &x, &y);

	int cnt = 0;

	for (int i = 1; i <= x; i++) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			for (int j = 1; j <= 31; j++) {
				cnt++;
				if (i == x && j == y) break;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			for (int j = 1; j <= 30; j++) {
				cnt++;
				if (i == x && j == y) break;
			}
			break;
		case 2:
			for (int j = 1; j <= 28; j++) {
				cnt++;
				if (i == x && j == y) break;
			}
			break;
		}

	}
	cnt %= 7;
	switch (cnt) {
	case 1: printf("MON\n"); break;
	case 2: printf("TUE\n"); break;
	case 3: printf("WED\n"); break;
	case 4: printf("THU\n"); break;
	case 5: printf("FRI\n"); break;
	case 6: printf("SAT\n"); break;
	case 0: printf("SUN\n"); break;
	}
}
