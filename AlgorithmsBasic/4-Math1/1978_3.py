# 소수 찾기
# 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

def is_prime(N):
    if N < 2:
        return False  # 1은 소수가 아님
    if N in (2, 3):
        return True  # 2, 3은 소수
    if N % 2 == 0 or N % 3 == 0:
        return False  # 2나 3으로 나누어 떨어지면 소수 아님
    if N < 9:
        return True  # 그 외의 10 미만의 수는 모두 소수

    k = 5
    l = N ** 0.5  # N의 제곱근까지만 검사

    while k <= l:
        if N % k == 0 or N % (k+2) == 0:
            return False
        k += 6

    return True


N = int(input())
numbers = list(map(int, input().split()))
result = 0

for i in range(len(numbers)):
    if is_prime(numbers[i]) == True:
        result += 1

print(result)
