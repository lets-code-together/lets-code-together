# 별 찍기 - 2

N = int(input())


def star_two(N):
    for i in range(1, N+1):
        print((" " * (N-i)) + ("*" * i))
