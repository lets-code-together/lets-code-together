/*���ڿ� S�� �־����� ��, ��� ���̻縦 ���������� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	string result[1000];
	cin >> str;

	for (int i = 0; i < str.size(); i++)// substr�� ����Ͽ� �ϳ��� �÷����鼭 ���̻� ����
	{
		result[i] = str.substr(i, str.size());
	}
	sort(result, result + str.size()); // sort()�Լ��� ù��° �Ķ���� = ������ ����������(�ּ�) , �ι�° �Ķ���� = ������ ����������(�ּ�)+���ڿ�����(str.size)

	for (int i = 0; i < str.size(); i++) //sort�Լ��� ���ĵ� ���� ���
		cout << result[i] << endl;
	
	return 0;
}