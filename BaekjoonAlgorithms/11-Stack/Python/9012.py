# 괄호 문자열이 VPS인지 아닌지 스택을 이용해 판단하기

T = int(input())  # 테스트 데이터 수


def stack_VPS(T):
    output = []  # 출력값

    for i in range(T):
        flag = True
        string = list(input())
        stack = []

        for s in string:
            if s == '(':
                stack.append(s)
            elif s == ')':
                if len(stack) == 0:
                    flag = False
                    break
                elif len(stack) != 0:
                    stack.pop()

        if len(stack) != 0:
            flag = False

        if not flag:
            output.append("NO")
        else:
            output.append("YES")

    return "\n".join(output)


print(stack_VPS(T))
