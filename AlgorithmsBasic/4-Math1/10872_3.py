# 팩토리얼
# 0보다 크거나 같은 정수 N이 주어진다.
# 이때, N!을 출력하는 프로그램을 작성하시오.


def factorial(N):
    factorial = 1

    while N > 0:
        factorial = factorial * N
        N -= 1

    return factorial


N = int(input())
print(factorial(N))
