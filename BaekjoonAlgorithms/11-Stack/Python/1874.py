# 임의의 수열이 주어졌을 때 스택을 이용해 그 수열을 만들 수 있는지 없는지,
# 있다면 어떤 순서로 연산을 수행해야 하는지 계산하기

n = int(input())  # n개의 줄에 수열을 이루는 1이상 n이하의 정수가 주어진다


def stack_sequence(n):
    stack = []
    output = []  # 출력값
    cnt = 1

    for i in range(n):  # n개의 줄
        num = int(input())  # 1이상 n이하의 정수 입력

        while cnt <= num:
            output.append("+")
            stack.append(cnt)
            cnt += 1
        if cnt > num:
            if stack[-1] > num:
                break
            output.append("-")
            stack.pop(-1)

    if len(stack) == 0:
        return "\n".join(output)
    else:
        return "NO"


print(stack_sequence(n))
