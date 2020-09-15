# 카드
# 숫자 카드 N장에는 -2^62보다 크거나 같고, 2^62보다 작거나 같은 정수가 하나씩 적혀있다.
# 카드 N이 주어졌을 떄, 가장 많이 가지고 있는 정수를 구하는 프로그램을 작성하시오.
# 만약 가장 많이 가지고 있는 정수가 여러 가지라면, 작은 것을 출력한다.

import sys

N = int(sys.stdin.readline())
cards = []
plus_count = [0] * N
minus_count = [0] * N

for i in range(N):
    card = int(sys.stdin.readline())
    if card >= 0 :
        plus_count[card] += 1
    else:
        minus_count[card] += 1

if max(plus_count) > max(minus_count):
    print(plus_count.index(max(plus_count)))
else:
    print((N - minus_count.index(max(minus_count))) * -1)

# 런타임 에러
