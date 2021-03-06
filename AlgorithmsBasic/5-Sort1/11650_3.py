# 좌표 정렬하기
# 2차원 평면 위의 점 N개가 주어진다.
# 좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
import sys

N = int(sys.stdin.readline())
list = []
for i in range(N):
    x, y = map(int, sys.stdin.readline().split())
    list.append((x, y))

for i in sorted(list):
    print(i[0], i[1])
