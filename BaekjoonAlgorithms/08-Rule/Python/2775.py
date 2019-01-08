# 아파트 k층, n호에 몇 명이 살고 있는지 구하기
# a층의 b 호에 살려면 a-1층의 1호부터 b호까지 사람들의 수의 합만큼 데려와 살아야 한다.
# 단, 아파트는 0층부터 있고, 각 층에는 1호부터 있으며 0층의 i호에는 i명이 산다.

T = int(input())  # 테스트 수


def people_number(T):
    output = []

    for i in range(T):
        k = int(input())  # 층
        n = int(input())  # 호

        a = [j for j in range(1, n+1)]
        for l in range(k):
            for num in range(n-1):
                a[num+1] += a[num]
        output.append(str(a[-1]))

    return output


print("\n".join(people_number(T)))
