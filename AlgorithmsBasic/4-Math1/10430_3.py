# 나머지
# (A+B)%C
# (A%C + B%C)%C
# (A×B)%C
# (A%C × B%C)%C
# 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

A, B, C = map(int,input().split())

print((A+B)%C)
print((A%C + B%C)%C)
print((A*B)%C)
print((A%C * B%C)%C)
