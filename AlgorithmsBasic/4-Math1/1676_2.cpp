/*
N!���� �ڿ������� ó�� 0�� �ƴ� ���ڰ� ���� ������ 0�� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� N�� �־�����. (0 �� N �� 500)
ù° �ٿ� ���� 0�� ������ ����Ѵ�.
*/
#include <iostream>
using namespace std;

int main()//�ᱹ���� �־����� ���μ����� ������ 2�� 5�� ���� ���ϱ�(�˻�) 
{
	int N, cnt = 0, cnt2 = 0, cnt5 = 0, tmp;
	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		tmp = i;

		while (tmp % 5 == 0)
		{
			tmp /= 5;
			cnt5++;
		}

		while (tmp % 2 == 0)
		{
			tmp /= 2;
			cnt2++;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cnt5--;
		cnt2--;
		cnt++;
		if (cnt5 == 0 || cnt2 == 0)
		{
			break;
		}
	}
	cout << cnt;
}