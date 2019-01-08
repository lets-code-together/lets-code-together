# 장애물들이 주어질 때, 난이도가 어떻게 매겨지는지 구하는 프로그램을 작성하라.
# 가장 높이 변화가 심한 부분을 난이도라 한다.

T = int(input())  # 테스트 케이스의 수


def block_difficulty(T):
    # 입력
    for i in range(T):
        N = int(input())  # 블록의 개수(2 <= N <= 100)
        block_height = list(map(int, input().split()))  # 블록의 높이를 블록이 늘어선 순서대로 나타낸 것

        max = 0  # 올라갈 때 가장 큰 난이도
        min = 0  # 내려갈 때 가장 큰 난이도
        for idx in range(N-1):
            if block_height[idx] >= block_height[idx+1]:
                if max < block_height[idx] - block_height[idx+1]:
                    max = block_height[idx] - block_height[idx+1]
            else:
                if min < block_height[idx+1] - block_height[idx]:
                    min = block_height[idx+1] - block_height[idx]

        print("#%d %d %d" % (i+1, min, max))


block_difficulty(T)
