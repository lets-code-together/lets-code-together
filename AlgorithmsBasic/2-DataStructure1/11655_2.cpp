/*
ROT13�� ī�̻縣 ��ȣ�� �������� ���� ���ĺ��� 13���ھ� �о �����.
���ڿ��� �־����� ��, "ROT13"���� ��ȣȭ�� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string a;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++)
	{
		if (isalpha(a[i]))
		{
			if (a[i] < 78)
				printf("%c", a[i] + 13);
			else if (a[i] >= 79 && a[i] <= 90)
				printf("%c", a[i] - 13);
			else if (a[i] >= 97 && a[i] < 110)
				printf("%c", a[i] + 13);
			else
				printf("%c", a[i] - 13);
		}
		else
			printf("%c", a[i]);
	}
}