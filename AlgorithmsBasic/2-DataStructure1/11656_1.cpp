/*문자열 S가 주어졌을 때, 모든 접미사를 사전순으로 정렬한 다음 출력하는 프로그램을 작성하시오.*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	string result[1000];
	cin >> str;

	for (int i = 0; i < str.size(); i++)// substr을 사용하여 하나씩 늘려가면서 접미사 저장
	{
		result[i] = str.substr(i, str.size());
	}
	sort(result, result + str.size()); // sort()함수의 첫번째 파라미터 = 시작점 포인터지점(주소) , 두번째 파라미터 = 도착지 포인터지점(주소)+문자열개수(str.size)

	for (int i = 0; i < str.size(); i++) //sort함수로 정렬된 값을 출력
		cout << result[i] << endl;
	
	return 0;
}