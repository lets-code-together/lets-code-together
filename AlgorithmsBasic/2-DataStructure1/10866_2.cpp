/*
정수를 저장하는 덱(Deque)를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 여덟 가지이다.

push_front X: 정수 X를 덱의 앞에 넣는다.
push_back X: 정수 X를 덱의 뒤에 넣는다.
pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 덱에 들어있는 정수의 개수를 출력한다.
empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
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