# 별찍기17
# 예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

N = int(input())

# 첫째 줄
print(' ' * (N-1) + '*')

# 첫째 줄과 마지막 줄을 제외한 줄
for i in range(1, N-1) :
    print(' ' * (N-i-1) + '*' + ' ' * (2*i-1) + '*')

# 마지막 줄
if N > 1 :
    print('*' * (2*N-1))