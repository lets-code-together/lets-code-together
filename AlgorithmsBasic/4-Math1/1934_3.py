# 최소공배수
# 두 자연수 A와 B가 주어졌을 때, A와 B의 최소공배수를 구하는 프로그램을 작성하시오.

T = int(input())

for i in range(T):
    A, B = map(int, input().split())
    x = A
    y = B

    while y > 0:
        if x < y :
            x, y = y, x
        else:
            temp = y
            y = x % y
            x = temp

    if y == 0:
        print(int((A * B)/x))
