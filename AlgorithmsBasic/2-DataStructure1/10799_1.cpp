/*
�踷���� �ڽź��� �� �踷��� ������ ���� �� �ִ�. 
 �踷��⸦ �ٸ� �踷��� ���� ���� ��� ������ ���Եǵ��� ����, ������ ��ġ�� �ʵ��� ���´�.
�� �踷��⸦ �ڸ��� �������� ��� �ϳ� �����Ѵ�.
�������� � �踷����� �� �������� ��ġ�� �ʴ´�. */
#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> s;
int ans = 0;

int main() {
	char str[100100];
	int len;
	scanf("%s", str);
	
	len = strlen(str);
	
	for (int i = 0; i < len; i++) 
	{
		if (str[i] == '(') s.push(1);
		else 
		{
			if (str[i - 1] == '(') 
			{
				s.pop();
				ans += s.size();
				//s.pop();
			}
			else 
			{
				s.pop();
				ans++;
			}
		}

	}
	printf("%d", ans);
}