# 수열 A에서 정수 X보다 작은 수 구하기

N, X = map(int, input().split())  # N은 A의 정수 개수
A = list(map(int, input().split()))


def less_than(A, X):
    less_than = []
    for i in A:
        if X > i:
            less_than.append(str(i))

    return less_than

print(" ".join(less_than(A, X)))
