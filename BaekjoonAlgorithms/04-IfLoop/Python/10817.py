# 세 정수 A, B, C 중 두 번째로 큰 정수 구하기

A, B, C = map(int, input().split())


def mid_number(A, B, C):
    if A == B or A == C or B > A > C or C > A > B:
        mid = A
    elif B == C or A > B > C or C > B > A:
        mid = B
    elif A > C > B or B > C > A or A == B == C:
        mid = C

    return mid


print(mid_number(A, B, C))
