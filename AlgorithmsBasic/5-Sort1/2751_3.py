# 수 정렬하기2
# N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
# 파이썬 내장함수 - sort() - 팀정렬을 사용한다고 함.

N = int(input())
list = []

for i in range(N):
    list.append(int(input()))

list.sort()

for i in range(N):
    print(list[i])
