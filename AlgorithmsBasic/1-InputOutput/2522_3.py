# 별찍기12
# 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

N = int(input())

for i in range(1, N+1) :
    print(' ' * (N-i) + '*' * i)

for idx in range(1, N) :
    print(' ' * idx + '*' * (N-idx))
