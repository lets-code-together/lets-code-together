# 11866과 동일
# (N, M) - 조세퍼스 순열을 구하기

N, M = map(int, input().split())  # N은 사람의 수, M은 앉은 순서


def josephus(N, M):
    idx = M - 1
    output = []
    a = [int(i) for i in range(1, N+1)]

    for j in range(N):  # N명의 사람이 모두 제거될 때까지 수행
        output.append(str(a.pop(idx)))  # M번째 앉은 사람 제거
        if len(a) != 0:
            idx += (M - 1)
            idx %= len(a)
        else:
            return ", ".join(output)


print("<%s>" % josephus(N, M))
