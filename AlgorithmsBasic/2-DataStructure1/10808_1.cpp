/*알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.*/
#include <iostream>
#include <string>
using namespace std;

int cnt[30];
int main()
{
	string str;
	int i;

	cin >> str;

	for (i = 0; i < str.size(); i++)
	{
		cnt[str[i]]++;
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		cout << cnt[i] << ' ';
	}
	return 0;
}
