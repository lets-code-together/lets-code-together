# 구구단 출력하기

N = int(input())


def gugudan(N):
    for i in range(1, 10):
        print("%s * %s = %s" % (N, i, N*i))
