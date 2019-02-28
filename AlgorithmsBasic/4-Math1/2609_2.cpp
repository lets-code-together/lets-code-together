/*두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오(유클리드호제법검색)*/
#include<iostream>
using namespace std;

int gcd(int a, int b) 
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int a, b;

	cin >> a >> b;
	cout << gcd(a, b) << endl;
	cout << gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b)) << endl; 

	return 0;
}