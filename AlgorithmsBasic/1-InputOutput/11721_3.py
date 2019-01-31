# 알파벳 소문자와 대문자로만 이루어진 길이가 N인 단어가 주어진다.
# 한 줄에 10글자씩 끊어서 출력하는 프로그램을 작성하시오.

word = str(input())  # 알파벳 소문자와 대문자로만 이루어진 단어
N = len(word)  # 단어의 길이

while N > 10 :
    print(word[0:10])
    word = word[10:]
    N = len(word)

if N <= 10 :
    print(word)
