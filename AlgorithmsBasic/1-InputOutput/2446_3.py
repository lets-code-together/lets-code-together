# 별찍기9
# 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

N = int(input())


def star(N) :

    for i in range(N) :
        print(' ' * i + '*' * ((2*(N-i))-1))

    for idx in range(1, N) :
        print(' ' * (N-idx-1) + '*' * (2*idx+1))


star(N)
