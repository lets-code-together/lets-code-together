/*
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
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