# 수 정렬하기3
# N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

import sys

N = int(sys.stdin.readline())
list = [0] * 10001

for i in range(N):
    list[int(sys.stdin.readline())] += 1

for i in range(1, 10001):
    for j in range(list[i]):
        print(i)
