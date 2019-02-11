/*
쇠막대기는 자신보다 긴 쇠막대기 위에만 놓일 수 있다. 
 쇠막대기를 다른 쇠막대기 위에 놓는 경우 완전히 포함되도록 놓되, 끝점은 겹치지 않도록 놓는다.
각 쇠막대기를 자르는 레이저는 적어도 하나 존재한다.
레이저는 어떤 쇠막대기의 양 끝점과도 겹치지 않는다. */
#include <iostream>
#include <string>
#include <stack>
using namespace std;

stack<int> s;
int ans = 0;

int main() 
{
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
