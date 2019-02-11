/*출력은 표준 출력을 사용한다. 만일 입력 괄호 문자열이 올바른 괄호 문자열(VPS)이면 “YES”, 아니면 “NO”를 한 줄에 하나씩 차례대로 출력해야 한다. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, size;
	cin >> size;

	for (i = 0; i < size; i++)
	{
		string s;
		cin >> s;
		int j, count = 0;

		for (j = 0; j < s.length() && count >= 0; j++)
		{
			if (s[j] == '(')
				count++;
			else 
				count--;
		}

		if (count == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}