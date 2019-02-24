# 진법 변환
# B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

def convert(N, B):
    answer = 0

    for idx, i in enumerate(N[::-1]):
        if ord(i) >= 65 and ord(i) <= 90:
            answer += ord[i] * pow(int(B), idx)
        else:
            answer += int(i) * pow(int(B), idx)

    return answer


N, B = map(str, input().split())
print(convert(N, B))
