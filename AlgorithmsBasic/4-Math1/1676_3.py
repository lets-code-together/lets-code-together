# 팩토리얼 0의 개수
# N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.

N = int(input())
factorial = 1
count = 0

while N > 0:
    factorial = factorial * N
    N -= 1

factorial = str(factorial)

for i in range(len(factorial)):
    i = len(factorial) - i - 1

    if factorial[i] == '0':
        count += 1
    elif factorial[i] != '0':
        break

print(count)
