# 벌집의 중앙 1에서 N번 방까지 지나는 방의 최소 개수 구하기

N = int(input())  # 끝 방 입력


def minimum_number_rooms(N):
    """
    a(1) : 2
    a(2) : 8 = 2 + 6 * 1
    a(3) : 20 = 8 + 6 * 2
    ...
    a(n) : a(n-1) + 6(n-1)
    """
    minimum = 0  # 지나는 방의 최소 개수
    a = 2  # 외곽의 첫번째 수
    tmp = 1  # 6의 배수를 더하기 위해 사용

    while 1:
        if N == 1:
            minimum = 1
            return minimum
        else:
            a += 6 * tmp
            tmp += 1
            if N < a:
                minimum = tmp
                return minimum


print(minimum_number_rooms(N))
