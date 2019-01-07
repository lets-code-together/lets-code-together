# 방 번호가 주어졌을 떄, 필요한 세트의 개수 최솟값 구하기
# 한 세트에는 0번부터 9번까지 들어 있으며, 6과 9는 서로 뒤집어서 사용 가능하다.
# 틀렸다...반례 찾기......

N = input()  # 방 번호


def minimum_set(N):
    n = [int(i) for i in list(N)]
    n_count = []
    required_num = 0

    for i in range(10):
        n_count.append(n.count(i))

    if n_count[6] == max(n_count) or n_count[9] == max(n_count):
        if (n_count[6] + n_count[9]) % 2 == 0:  # 6의 개수와 9의 개수가 짝수인 경우
            required_num = (n_count[6] + n_count[9]) / 2
        elif (n_count[6] + n_count[9]) % 2 != 0:  # 6의 개수와 9의 개수가 홀수인 경우
            required_num = ((n_count[6] + n_count[9]) / 2) + 1
    else:
        required_num = max(n_count)  # 6과 9를 제외한 세트의 최솟값

    return int(required_num)


print(minimum_set(N))
