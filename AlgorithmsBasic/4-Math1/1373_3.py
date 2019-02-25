# 2진수 8진수
# 2진수가 주어졌을 때, 8진수로 변환하는 프로그램을 작성하시오.

Base2 = input()
Base8 = []

while len(Base2) % 3 != 0 :
    Base2 = '0' + Base2

for i in range(0, len(Base2), 3):
    sum = int(Base2[i]) * 4 + int(Base2[i+1]) * 2 + int(Base2[i+2]) * 1
    Base8.append(str(sum))

print("".join(Base8))
