/*10개씩 끊어서 출력하기*/
#include <iostream>
using namespace std;

int main()
{
	char arr[101];

	while (scanf("%10s", arr) == 1)
	{
		printf("%s\n", arr);
	}

	return 0;
}