# 1부터 N까지 합 구하기

n = int(input())

def 1_N_sum(n):
    sum = 0
    for i in range(1, n+1):
        sum += i

print(sum)
