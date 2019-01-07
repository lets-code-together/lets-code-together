/*단어 S에서 각 알파벳이 나오는 위치*/
#include<stdio.h>

int main()
{
	char S[101]; // 단어 S를 저장할 변수
	char alphabet[26]; // 알파벳을 저장할 변수
	int position[26]; // 각 알파벳(26개)이 몇번째에 나오는지를 저장할 변수 

	for (int i = 0; i < 26; i++) 
	{
		alphabet[i] = 'a' + i; // 배열에 a~z까지 저장
		position[i] = -1; // result를 -1로 초기화
	}

	scanf("%s", S); // 단어 S를 입력 받음
	
	int j; // 루프 인덱스용 변수

	for (int i = 0; i < 26; i++) 
	{
		j = 0;
		while (1) //무한루프
		{ // 단어 S를 한 글자씩 살펴보다가
			if (alphabet[i] == S[j]) 
			{ // 단어 S에서 알파벳(a~z)이 나오는 경우  
				position[i] = j; // 그 위치 값을 저장
				break; // 제일 처음 나오는 위치만 알면 되므로 저장 후 탈출
			}
			if (S[j] == '\0') 
				break; // 단어 S를 모두 확인한 경우 탈출
			j++;
		}
	}

	for (int i = 0; i < 26; i++ ) 
		printf("%d ", position[i]); //결과 출력

	return 0;
}

