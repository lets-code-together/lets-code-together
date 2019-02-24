/*��ȣ ���ڿ�(Parenthesis String, PS)�� �� ���� ��ȣ ��ȣ�� (�� )������ �����Ǿ� �ִ� ���ڿ��̴�. �� �߿��� ��ȣ�� ����� �ٸ��� ������ ���ڿ��� �ùٸ� ��ȣ ���ڿ�(Valid PS, VPS)�̶�� �θ���. �� ���� ��ȣ ��ȣ�� �� ��( )�� ���ڿ��� �⺻ VPS �̶�� �θ���. ���� x �� VPS ��� �̰��� �ϳ��� ��ȣ�� ���� ���ο� ���ڿ� ��(x)���� VPS �� �ȴ�. �׸��� �� VPS x �� y�� ����(concatenation)��Ų ���ο� ���ڿ� xy�� VPS �� �ȴ�. ���� ��� ��(())()���� ��((()))�� �� VPS ������ ��(()(��, ��(())()))�� , �׸��� ��(()�� �� ��� VPS �� �ƴ� ���ڿ��̴�. 

�������� �Է����� �־��� ��ȣ ���ڿ��� VPS ���� �ƴ����� �Ǵ��ؼ� �� ����� YES �� NO �� ��Ÿ����� �Ѵ�. */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, size;
	cin >> size;

	for (i = 0; i < size; i++)
	{
		string s;
		cin >> s;
		int j, count = 0;

		for (j = 0; j < s.length() && count >= 0; j++)
		{
			if (s[j] == '(')
				count++;
			else
				count--;
		}

		if (count == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}