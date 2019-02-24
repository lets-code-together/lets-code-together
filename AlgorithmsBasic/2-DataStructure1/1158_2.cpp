/*
1������ N������ N���� ����� ���� �̷�鼭 �ɾ��ְ�, ���� ���� M(�� N)�� �־�����.
���� ������� M��° ����� �����Ѵ�. �� ����� ���ŵǸ� ���� ������ �̷���� ���� ���� �� ������ ����� ������.
�� ������ N���� ����� ��� ���ŵ� ������ ��ӵȴ�. ������ ������� ���ŵǴ� ������ (N, M)-�����۽� �����̶�� �Ѵ�.
���� ��� (7, 3)-�����۽� ������ <3, 6, 2, 7, 5, 1, 4>�̴�.
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
