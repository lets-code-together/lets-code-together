# 별찍기8
# 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

N = int(input())


def star(N) :

    for i in range(1, N+1) :
        print('*' * i + ' ' * 2*(N-i) + '*' * i)

    for idx in range(1, N) :
        print('*' * (N-idx) + ' ' * (2*idx) + '*' * (N-idx))


star(N)
