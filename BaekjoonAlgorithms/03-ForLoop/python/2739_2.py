# N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.

N = int(input())
multiply = 1  # N에 곱할 값

for i in range(9):
    print('%d * %d = %d' % (N, multiply, N * multiply))
    multiply += 1
