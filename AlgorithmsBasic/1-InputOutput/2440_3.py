# 별찍기3
# 첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

N = int(input())

for i in range(N):
    print('*' * N)
    N -= 1
