/*알파벳 소문자로만 이루어진 단어 S가 주어진다. 
각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.*/\
#include<iostream>
using namespace std;

int main()
{
	char s[101], c;
	cin >> s;

	for (c = 'a'; c <= 'z'; c++)
	{
		int i = 0;
		int result = -1;
		while (s[i] != '\0') //\0은 널문자로 문자열의 끝까지 탐색하겠다는 의미, 널문자가 나오기전까지 while문 반복
		{
			if (s[i] == c)
			{
				result = i;
				break;
			}
			i++;
		}
		cout << result << " ";
	}
}
