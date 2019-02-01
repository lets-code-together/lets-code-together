# 알파벳 개수
# 알파벳 소문자로만 이루어진 단어 S가 주어진다.
# 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.

S = input()

for alphabet in range(97, 123):
    print(S.count(chr(alphabet)), end=" ")

# 다른 풀이도 참고해볼것!
