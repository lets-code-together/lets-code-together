/*입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 
각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.*/
#include <iostream>
using namespace std;

int main()
{
	char arr[101];

	while (scanf("%[^\n]\n", arr) == 1)
	{
		printf("%s\n", arr);
	}
	return 0;
}