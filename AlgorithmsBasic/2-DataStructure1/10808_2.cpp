/*
���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.
�� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
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