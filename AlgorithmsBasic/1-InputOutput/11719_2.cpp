/*입력 받은 대로 출력하는 프로그램을 작성하시오.*/
#include<iostream>
using namespace std;

int main()
{
	char arr[101];

	while (fgets(arr, 101, stdin))
		printf("%s", arr);

	return 0;
}
