# Base Conversion
# A진법으로 나타낸 숫자를 B진법으로 변환시켜주는 프로그램을 작성하시오.
# A와 B는 모두 2이상 30이하의 자연수다.


def converse_to_base_10():
    base10 = 0

    for idx, i in zip(range(m),range(m)):
        i = m - i - 1
        base10 += int(numbers[idx]) * (A ** i)

    return base10


def converse_to_base_B(N):
    q, r = divmod(N, B)  # 10진법의 수를 B로 나눈 몫, 나머지
    baseB_list = []

    while q != 0:
        r = str(r)
        baseB_list.insert(0, r)
        q, r = divmod(q, B)

    r = str(r)
    baseB_list.insert(0, r)

    baseB = ' '.join(baseB_list)

    return baseB


A, B = map(int, input().split())
m = int(input())  # A진법으로 나타낸 숫자의 자리수의 개수
numbers = list(input().split())  # A진법으로 나타낸 숫자

print(converse_to_base_B(converse_to_base_10()))
