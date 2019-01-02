# 현재 Queue에 있는 문서의 수와 중요도가 주어졌을 때, 어떤 한 문서가 몇 번째로 인쇄되는지 알아내기
# 중도포기
Test_case = int(input())
N, M = input().split()
importance = input().split()
order = []
int(N)
int(M)

while True:
    if importance[a] < importance[a+1]:
        importance.append(importance[a])
        importance.pop()
    else:
        break

l = len(importance)
x = 1
while l > 0:
    order.append(x)
    x = x + 1
    l = l - 1
