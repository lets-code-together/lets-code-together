/*문자열이 주어졌을 때, "ROT13"으로 암호화한 다음 출력하는 프로그램을 작성하시오.*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;

	while (getline(cin, str))
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'M')
				str[i] = str[i] + 13;
			else if (str[i] >= 'N' && str[i] <= 'Z')
				str[i] = str[i] - 13;
			else if (str[i] >= 'a' && str[i] <= 'm')
				str[i] = str[i] + 13;
			else if (str[i] >= 'n' && str[i] <= 'z')
				str[i] = str[i] - 13;
		}
		cout << str << endl;
	}
}