/*최대 공약수와 최소공배수 유클리드 호제법을 사용한 최대공약수 구하기
 유클리드 호제법 : a = bq + r a와 b와 r의 최대 공약수는 같다 큰수에서 작은 수를 나눠 나머지가 나오면 나머지로 나누고 나머지가 나오지 않는 나머지일때 그 나머지가 최대공약수이다.*/
#include<iostream>
using namespace std;

int gcd(int a, int b) //유클리드 호제법 재귀로 나타낸것
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
	cout << gcd(a, b) * (a / gcd(a, b)) * (b / gcd(a, b)) << endl; //최소공배수 각 수를 최대공약수를 나눈값을 
	
	return 0;
}
