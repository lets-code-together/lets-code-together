/*����� ǥ�� ����� ����Ѵ�. ���� �Է� ��ȣ ���ڿ��� �ùٸ� ��ȣ ���ڿ�(VPS)�̸� ��YES��, �ƴϸ� ��NO���� �� �ٿ� �ϳ��� ���ʴ�� ����ؾ� �Ѵ�. */
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