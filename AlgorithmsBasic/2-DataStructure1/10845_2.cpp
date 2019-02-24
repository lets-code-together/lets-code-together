/*
push X: ���� X�� ť�� �ִ� �����̴�.
pop: ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ť�� ����ִ� ������ ������ ����Ѵ�.
empty: ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
front: ť�� ���� �տ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ť�� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ť�� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	queue<int> q;
	int n, i;
	string str;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		int data, num;
		cin >> str;
		if (str == "push")
		{
			cin >> data;
			q.push(data);
		}
		else if (str == "pop")
		{
			if (q.size() != 0)
			{
				num = q.front();
				q.pop();
			}
			else
			{
				num = -1;
			}
			cout << num << endl;
		}
		else if (str == "size")
		{
			cout << q.size() << endl;
		}
		else if (str == "empty")
		{
			if (q.size() == 0)
				num = 1;
			else
				num = 0;
			cout << num << endl;
		}
		else if (str == "front")
		{
			if (q.size() == 0)
				num = -1;
			else
				num = q.front();
			cout << num << endl;
		}
		else if (str == "back")
		{
			if (q.size() == 0)
				num = -1;
			else
				num = q.back();
			cout << num << endl;
		}
	}
	return 0;
}