# 별찍기7
# 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

N = int(input())


def star(N) :

    for i in range(1, N+1) :
        print(' ' * (N-i) + '*' * (2*i-1))

    for idx in range(1, N) :
        print(' ' * idx + '*' * ((2*(N-idx))-1))


star(N)
