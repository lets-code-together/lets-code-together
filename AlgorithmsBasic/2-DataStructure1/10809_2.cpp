/*
�ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, �ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��,
���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
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
		while (s[i] != '\0') 
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