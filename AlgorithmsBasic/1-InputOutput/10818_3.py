# N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

N = int(input())  # 정수의 개수
integer = list(map(int, input().split()))  # 입력받은 N개의 정수
maximum = -1000000  # 최댓값
minimum = 1000000  #최솟값

for i in integer :

    if i > maximum :
        maximum = i

    if i < minimum :
        minimum = i

print(minimum, maximum)
