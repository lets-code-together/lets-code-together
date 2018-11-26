# 주어진 수 N개 중에서 소수가 몇 개인지 구하기

N = int(input())  # 수의 개수
num = list(map(int, input().split()))


def demical(num):
    count = 0  # 소수가 아닌 수의 개수
    for i in num:
        if i == 1:
            count += 1
        elif i > 1:
            for j in range(2, i):
                if i % j == 0:  # 소수가 아니다
                    count += 1
                    break

    return len(num) - count


print(demical(num))
