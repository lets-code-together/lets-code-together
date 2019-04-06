# 소인수분해
# 정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.
# 시간초과
N = int(input())
prime = []  # 소수
factorization = []  # 소인수분해

# N 보다 작은 소수들의 리스트 만들기
a = [False,False] + [True]*(N-1)
for i in range(2,N+1):
  if a[i]:
    prime.append(i)
    for j in range(2*i, N+1, i):
        a[j] = False

# 소인수분해하기
n = len(prime)
j = 0  # 소수 배열의 인덱스

for i in range(n):
    if N == 1:
        continue
    if N == 0:
        break
    if (N % prime[j]) == 0:
        N = N / prime[j]  # 몫
        factorization.append(prime[j])
    else:
        j += 1

for i in range(len(factorization)):
    print(factorization[i])
