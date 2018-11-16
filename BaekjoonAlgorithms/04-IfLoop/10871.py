# 수열 A에서 정수 X보다 작은 수 구하기

N, X = map(int, input().split()) # N은 A의 정수 개수
A = list(map(int, input().split()))


def less_than(x):
    for i in A:
        if x > i:
            print(i, end=' ')


less_than(X)
