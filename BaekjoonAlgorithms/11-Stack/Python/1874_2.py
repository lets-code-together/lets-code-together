# 1부터 n까지의 수를 스택에 넣었다가 뽑아 늘어놓음으로써, 하나의 수열을 만들 수 있다.
# 이때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자.
# 임의의 수열이 주어졌을 때 어떤 순서로 push와 pop 연산을 수행해야 하는지 계산하는 프로그램을 작성하라.

check = int(input())
list1 = []
list2 = []
list3 = []

for _ in range(check):
    list1.append(input())

for i in range(1,check+1):
    list2.append(i)

# 이 뒤로는 도무지 모르겠다 ㅠㅠ
