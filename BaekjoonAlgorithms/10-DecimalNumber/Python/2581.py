# 자연수 M과 N이 주어졌을 때 M이상 N이하의 자연수 중 소수인 것을
# 모두 골라 이들 소수의 합과 최솟값을 구하기

M = int(input())
N = int(input())


def decimal_between(M, N):
    decimal = []  # 소수 리스트
    for i in range(M, N+1):
        if i == 1:
            pass
        elif i > 1:
            for j in range(2, i+1):
                if i % j == 0:  # 소수가 아니다
                    break
            if i == j:  # 소수다
                decimal.append(i)

    return decimal


def decimal_op(decimal):
    decimal_sum = 0
    for i in decimal:
        decimal_sum += i

    decimal.sort()

    return decimal_sum, decimal[0]


decimal = decimal_between(M, N)
if len(decimal) == 0:
    print("-1")
else:
    print(decimal_op(decimal)[0])
    print(decimal_op(decimal)[1])
