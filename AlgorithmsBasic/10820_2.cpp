/*문자열 N개가 주어진다. 
이때, 문자열에 포함되어 있는 소문자, 대문자, 숫자, 공백의 개수를 구하는 프로그램을 작성하시오.
각 문자열은 알파벳 소문자, 대문자, 숫자, 공백으로만 이루어져 있다.*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;

	while (getline(cin, str))
	{
		int num[4] = { 0, };

		for (char c : str)
		{
			if (c >= 'a' && c <= 'z')
				num[0]++;
			else if (c >= 'A' && c <= 'Z')
				num[1]++;
			else if (c >= '0' && c <= '9')
				num[2]++;
			else if (c == ' ')
				num[3]++;
		}
		cout << num[0] << ' ' << num[1] << ' ' << num[2] << ' ' << num[3] << ' ' << endl;
	}
	cout << endl;

	return 0;
}