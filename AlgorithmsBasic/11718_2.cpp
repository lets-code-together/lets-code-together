/*입력받은대로 출력하기*/
#include <iostream>
using namespace std;

int main()
{
	char arr[101];

	while (scanf("%[^\n]\n", arr) == 1)
		printf("%s\n", arr);
	
	return 0;
}