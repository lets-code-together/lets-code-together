# ROT13
# ROT13은 카이사르 암호의 일종으로 영어 알파벳을 13글자씩 밀어서 만든다.
# 문자열이 주어졌을 때, "ROT13"으로 암호화한 다음 출력하는 프로그램을 작성하시오.

S = list(input())
result = []

for i in range(len(S)):
    # 입력받은 문자가 소문자 a~m 일 때
    if ord(S[i]) >= 97 and ord(S[i]) <= 109 :
        result.append(chr(ord(S[i]) + 13))
    # 입력받은 문자가 소문자 n~z 일 떄
    elif ord(S[i]) >= 110 and ord(S[i]) <= 122 :
        result.append(chr(ord(S[i]) - 13))
    # 입력받은 문자가 대문자 A~M 일 때
    elif ord(S[i]) >= 65 and ord(S[i]) <= 77 :
        result.append(chr(ord(S[i]) + 13))
    # 입력받은 문자가 대문자 N~Z 일 떄
    elif ord(S[i]) >= 78 and ord(S[i]) <= 90 :
        result.append(chr(ord(S[i]) - 13))
    # 입력받은 문자가 알파벳이 아닐 떄
    else:
        result.append(S[i])

for j in range(len(S)):
    print(result[j], end='')
