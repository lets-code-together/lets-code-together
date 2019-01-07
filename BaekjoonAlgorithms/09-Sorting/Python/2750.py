# N개의 수를 오름차순으로 정렬하기

num_nums = int(input())  # 수의 개수


def ascending(num_nums):
    num = []  # 수 입력
    for i in range(num_nums):
        num.append(int(input()))

    num.sort()
    num = map(str, num)

    return num


print("\n".join(ascending(num_nums)))
