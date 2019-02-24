# 장애물들이 주어질 때, 준홍이의 기준으로 난이도가 어떻게 매겨지는지 구하는 프로그램을 작성하라.

test_case = int(input())  # 테스트 케이스

for i in range(test_case):
    N = int(input())  # 블록의 개수
    block_heights = list(map(int,input().split()))  # 각 블록의 높이
    up_max = 0  # 올라갈 때 가장 심한 높이 변화
    down_max = 0  # 내려갈 때 가장 심한 높이 변화

    for i in range(N-1):
        if (block_heights[i+1] - block_heights[i]) > up_max:
            up_max = (block_heights[i+1] - block_heights[i])

    for i in range(N-1):
        if (block_heights[i] - block_heights[i+1]) > down_max:
            down_max = (block_heights[i] - block_heights[i+1])

    print('#%d %d %d' % (i+1, up_max, down_max))
