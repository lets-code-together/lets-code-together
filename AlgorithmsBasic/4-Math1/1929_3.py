# 소수 구하기
# M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.


def is_prime(X):
    if X < 2:
        return False
    if X in (2, 3):
        return True
    if X % 2 == 0 or X % 3 == 0:
        return False
    if X < 9:
        return True

    k = 5
    l = X ** 0.5

    while k <= l:
        if X % k == 0 or X % (k+2) == 0:
            return False
        k += 6

    return True


M, N = map(int, input().split())

for i in range(N - M + 1):
    i += M
    if is_prime(i) == True:
        print(i)
