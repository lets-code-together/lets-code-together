# 주어진 수 모두 더하기

N = int(input()) # 숫자의 개수
number = list(input()) # 더할 숫자

def number_sum(N, number):
    sum = 0
    for n in number:
        sum += int(n)

print(sum)
