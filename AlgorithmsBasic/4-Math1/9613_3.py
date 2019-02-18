# GCD 합
# 양의 정수 n개가 주어졌을 때, 가능한 모든 쌍의 GCD의 합을 구하는 프로그램을 작성하시오.


def gcd(x,y):
    while y != 0:
        r = x % y
        x = y
        y = r

    return x


t = int(input())

for _ in range(t):
    n, *a = map(int, input().split())
    sum = 0  # gcd합

    for i in range(n-1):
        for j in range(i+1, n):
            sum += gcd(a[i],a[j])

    print(sum)
