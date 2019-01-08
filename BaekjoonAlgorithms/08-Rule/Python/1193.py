# x가 주어졌을 때, x번째 분수 구하기

x = int(input())


def x_fraction(x):
    i = 1  # 지나온 칸의 개수
    tmp = 1  # 대각선 칸의 개수

    while 1:
        if x == 1:
            return "1/1"
        tmp += 1
        i += tmp
        if x <= i:
            if tmp % 2 == 0:  # 짝수번째
                k = i - x
                return "%d/%d" % (tmp-k, k+1)
            if tmp % 2 != 0:  # 홀수번째
                k = i - x
                return "%d/%d" % (k+1, tmp-k)


print(x_fraction(x))
