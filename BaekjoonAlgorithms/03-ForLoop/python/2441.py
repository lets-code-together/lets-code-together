# 별 찍기 - 4

N = int(input())


def star_four(N):
    for i in range(N):
        print((" " * i) + ("*" * (N-i)))
