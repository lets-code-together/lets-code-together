# 서로 같지 않은 세 자리 수 A, B를 거꾸로 읽었을 때 큰 수 구하기

num = list(map(str, input().split()))


def backward_lager_num(num):
    new_num = []

    for i in range(len(num)):
        for j in range(3):
            new_num.append(num[i][2-j])

    new_a = int("".join(new_num[0:3]))
    new_b = int("".join(new_num[3:6]))

    return max(new_a, new_b)


print(backward_lager_num(num))
