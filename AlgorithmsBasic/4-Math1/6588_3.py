# 골드바흐의 추측
# 4보다 큰 모든 짝수는 두 홀수 소수의 합으로 나타낼 수 있다.
# 백만 이하의 모든 짝수에 대해서, 이 추측을 검증하는 프로그램을 작성하시오.
# 시간초과
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


# 소수의 합으로 n을 나타내기
while True:
    n = int(input())  # 짝수 정수
    if n == 0:
        break
    # 백만보다 작은 소수의 리스트 만들기
    prime = []

    for i in range(1000000):
        if is_prime(i) == True:
            prime.append(i)
    i = 0
    while i < int(len(prime)/2 + 1):
        for j in range(int(len(prime))):
            j = int(len(prime)/2) - j
            if prime[int(i)] + prime[int(j)] == n:
                print("%d = %d + %d" %(n, prime[int(i)], prime[int(j)]))
                break

        if prime[int(i)] + prime[int(j)] == n:
            break
        else:
            i += 1

    if prime[int(i)] + prime[int(j)] != n:
        print("Goldbach's conjecture is wrong.")
