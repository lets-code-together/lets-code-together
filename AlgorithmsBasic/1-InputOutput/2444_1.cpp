/*
	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
	*
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.*/
#include <iostream>

using namespace std;

int main() {
	int N;
	scanf("%d", &N);
	//1행부터 5행까지
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N - i - 1; j++) //공백을 위한 for문
			printf(" ");
		for (int j = 0; j < 2 * i + 1; j++) //별 출력을 위한 for문
			printf("*");
		printf("\n");
	}
	//6행부터 9행까지 (4개 행)
	for (int i = 1; i < N; i++) 
	{
		for (int j = 0; j < i; j++) 
			printf(" ");
		for (int j = 0; j < 2 * (N - i) - 1; j++) 
			printf("*");
		printf("\n");
	}

	return 0;
}
