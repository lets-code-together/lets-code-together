# 빠른 출력하기
import sys

T = int(sys.stdin.readline())


def fast_output(T):
    for i in range(T):
        A, B = map(int, sys.stdin.readline().split())
        print(A + B)


fast_output(T)
