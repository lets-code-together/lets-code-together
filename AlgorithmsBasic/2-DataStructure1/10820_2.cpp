/*���ڿ� N���� �־�����. 
�̶�, ���ڿ��� ���ԵǾ� �ִ� �ҹ���, �빮��, ����, ������ ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ���ڿ��� ���ĺ� �ҹ���, �빮��, ����, �������θ� �̷���� �ִ�.*/
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