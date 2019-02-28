/*
ROT13은 카이사르 암호의 일종으로 영어 알파벳을 13글자씩 밀어서 만든다.
문자열이 주어졌을 때, "ROT13"으로 암호화한 다음 출력하는 프로그램을 작성하시오.
*/
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string a;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++)
	{
		if (isalpha(a[i]))
		{
			if (a[i] < 78)
				printf("%c", a[i] + 13);
			else if (a[i] >= 79 && a[i] <= 90)
				printf("%c", a[i] - 13);
			else if (a[i] >= 97 && a[i] < 110)
				printf("%c", a[i] + 13);
			else
				printf("%c", a[i] - 13);
		}
		else
			printf("%c", a[i]);
	}
}