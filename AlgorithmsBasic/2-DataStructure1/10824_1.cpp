/*�� �ڿ��� A, B, C, D�� �־�����. �̶�, A�� B�� ���� ���� C�� D�� ���� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int a, b, c, d = 0;
	string result1, result2;
	
	cin >> a >> b >> c >> d;

	result1 = to_string(a) + to_string(b); //to_string : integer�� string���� ��ȯ�����ִ� �Լ�
	result2 = to_string(c) + to_string(d); //string���� ��ȯ �� �� ���� �̾�ٿ�����Ѵ�.

	long long A = stoll(result1); //stoll�Լ� : string�� long longŸ������ ��ȯ�����ش�.
	long long B = stoll(result2);

	cout << A + B << endl;

	return 0;
}