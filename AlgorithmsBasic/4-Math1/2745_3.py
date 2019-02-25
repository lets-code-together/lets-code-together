# 진법 변환
# B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

def convert(N, B):
    answer = 0

    for idx, i in enumerate(N):
        idx = len(N) - idx - 1

        try:
            answer += int(i) * (B ** idx)
        except:
            answer += (ord(i) - 55) * (B ** idx)

    return answer


N, B = input().split()
B = int(B)
print(convert(N, B))
