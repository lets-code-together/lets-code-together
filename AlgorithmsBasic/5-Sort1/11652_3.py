# 카드
# 숫자 카드 N장에는 -2^62보다 크거나 같고, 2^62보다 작거나 같은 정수가 하나씩 적혀있다.
# 카드 N이 주어졌을 떄, 가장 많이 가지고 있는 정수를 구하는 프로그램을 작성하시오.
# 만약 가장 많이 가지고 있는 정수가 여러 가지라면, 작은 것을 출력한다.

import sys

N = int(sys.stdin.readline())
cards = []
for i in range(N):
    cards.append(sys.stdin.readline())

card_num = []

for i in cards:
    if i in card_num:
        continue
    else:
        card_num.append(i)

card_num.sort()
count = [0] * len(card_num)

for i in range(N):
    count[card_num.index(max(cards[i]))] += 1
