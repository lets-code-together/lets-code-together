/*
1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 M(≤ N)이 주어진다.
이제 순서대로 M번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다.
이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, M)-조세퍼스 순열이라고 한다.
예를 들어 (7, 3)-조세퍼스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.
*/

#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> q;
	int N, M, i;

	cin >> N >> M;

	for (i = 1; i <= N; i++)
		q.push(i);
	cout << "<";

	int cnt = 1;
	int temp = 0;

	while (!q.empty())
	{
		if (cnt != M)
		{
			cnt++;
			q.push(q.front());
			q.pop();
		}
		else
		{
			temp++;
			cout << q.front();
			q.pop();
			cnt = 1;
			if (temp != N)
				cout << ", ";

		}
	}
	cout << ">";
}
