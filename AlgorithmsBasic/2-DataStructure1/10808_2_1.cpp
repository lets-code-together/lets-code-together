#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(void) {
	// ���ڿ� �Է�
	string str;
	cin >> str;

	// �ð����⵵ : O(N)
	for (int i = 'a'; i <= 'z'; i++) {
		// str���ڿ� ó������ ������ 'a'������ 'z'�������� ������ ���� ��ȯ�Ѵ�.
		// Example: hello �ϰ�� 'a'���� ���� hello��ü�� Ž���ؼ� ������ ��ȯ�Ѵ�. ������ 'b' ~ 'z'���� Ž��
		cout << count(str.begin(), str.end(), i) << ' ';

	}
	printf("\n");

	return 0;
}