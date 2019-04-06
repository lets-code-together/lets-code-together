n=1000000
a = [False,False] + [True]*(n-1)
prime=[]

for i in range(2,n+1):
  if a[i]:
    prime.append(i)
    for j in range(2*i, n+1, i):
        a[j] = False
# 소수의 합으로 n을 나타내기
while True:
    n = int(input())  # 짝수 정수
    if n == 0:
        break
    i = 0
    while i <= n+1:
        for j in range(n):
            j = n - j
            if prime[int(i)] + prime[int(j)] == n:
                print("%d = %d + %d" %(n, prime[int(i)], prime[int(j)]))
                break

        if prime[int(i)] + prime[int(j)] == n:
            break
        else:
            break

    if prime[int(i)] + prime[int(j)] != n:
        print("Goldbach's conjecture is wrong.")
