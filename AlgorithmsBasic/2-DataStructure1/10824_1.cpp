/*네 자연수 A, B, C, D가 주어진다. 이때, A와 B를 붙인 수와 C와 D를 붙인 수의 합을 구하는 프로그램을 작성하시오.*/
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
	int a, b, c, d = 0;
	string result1, result2;
	
	cin >> a >> b >> c >> d;

	result1 = to_string(a) + to_string(b); //to_string : integer를 string으로 변환시켜주는 함수
	result2 = to_string(c) + to_string(d); //string으로 변환 후 두 수를 이어붙여줘야한다.

	long long A = stoll(result1); //stoll함수 : string을 long long타입으로 변환시켜준다.
	long long B = stoll(result2);

	cout << A + B << endl;

	return 0;
}