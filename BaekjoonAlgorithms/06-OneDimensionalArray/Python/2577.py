# 세 자연수 A x B x C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번 쓰였는지 구하기

A = int(input())
B = int(input())
C = int(input())


def count_array(A, B, C):
    num = list(str(A * B * C))
    for i in range(10):
        print(num.count(str(i)))


count_array(A, B, C)
