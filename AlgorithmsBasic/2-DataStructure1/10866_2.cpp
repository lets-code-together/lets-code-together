/*
������ �����ϴ� ��(Deque)�� ������ ����, �Է����� �־����� ����� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �� ���� �����̴�.

push_front X: ���� X�� ���� �տ� �ִ´�.
push_back X: ���� X�� ���� �ڿ� �ִ´�.
pop_front: ���� ���� �տ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
pop_back: ���� ���� �ڿ� �ִ� ���� ����, �� ���� ����Ѵ�. ����, ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
size: ���� ����ִ� ������ ������ ����Ѵ�.
empty: ���� ��������� 1��, �ƴϸ� 0�� ����Ѵ�.
front: ���� ���� �տ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
back: ���� ���� �ڿ� �ִ� ������ ����Ѵ�. ���� ���� ����ִ� ������ ���� ��쿡�� -1�� ����Ѵ�.
*/
#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main()
{
	deque<int> dq;
	string str;
	int x, n, i;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		int output;
		cin >> str;

		if (str == "push_front")
		{
			cin >> x;
			dq.push_front(x);
		}
		else if (str == "push_back")
		{
			cin >> x;
			dq.push_back(x);
		}
		else if (str == "pop_front")
		{
			if (!dq.empty())
			{
				output = dq.front();
				dq.pop_front();
			}
			else
				output = -1;
			cout << output << endl;
		}
		else if (str == "pop_back")
		{
			if (!dq.empty())
			{
				output = dq.back();
				dq.pop_back();
			}
			else
				output = -1;
			cout << output << endl;
		}
		else if (str == "size")
			cout << dq.size() << endl;
		else if (str == "empty")
		{
			if (dq.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (str == "front")
		{
			if (dq.empty())
				cout << "-1" << endl;
			else
				cout << dq.front() << endl;
		}
		else if (str == "back")
		{
			if (dq.empty())
				cout << "-1" << endl;
			else
				cout << dq.back() << endl;
		}

	}
	return 0;
}