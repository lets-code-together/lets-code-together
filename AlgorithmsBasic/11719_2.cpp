/*�Է¹������ ����ϱ�*/
#include<iostream>
using namespace std;

int main()
{
	char arr[101];

	while (fgets(arr, 101, stdin))
		printf("%s", arr);

	return 0;
}