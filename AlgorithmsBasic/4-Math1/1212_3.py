# 8진수 2진수
# 8진수가 주어졌을 때, 2진수로 변환하는 프로그램을 작성하시오.

Base8 = input()
Base2_list = []
Base2 = ''

for i in Base8:
    i = int(i)

    for j in range(3):
        Base2_list.insert(0, str(i % 2))
        i = int(i / 2)

    Base2 += ''.join(Base2_list)
    Base2_list.clear()

for i in Base2:
    if len(Base2) == 1:
        break
    if i == '1':
        break
    elif i == '0':
        Base2 = Base2[1:]

print(Base2)
