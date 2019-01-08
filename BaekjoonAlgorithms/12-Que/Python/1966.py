# 주어진 문서가 몇 번째로 인쇄되는지 구하기
# 가장 앞에 있는 문서보다 중요도가 높은 문서가 하나라도 있다면,
# 이 문서는 인쇄하지 않고 가장 뒤에 배치한다.
from collections import deque

test_case = int(input())  # 테스트 수


def que_printer(N):
    output = []

    for i in range(N):
        N, M = map(int, input().split())
        # N = 문서의 수
        # M = 몇 번째로 인쇄되었는지 궁금한 문서의 위치
        importance = deque(input().split())  # 중요도
        idx = deque([0] * N)  # 중요도가 중복된 경우에 구분하기 위한 배열
        idx[M] = 1

        cnt = 0  # 순서
        while 1:  # 문서가 비워질 떄까지 실행한다
            if max(importance) == importance[0]:  # 중요도가 가장 높은 경우 인쇄한다.
                importance.popleft()  # 맨 앞의 요소를 제거한다.
                idx.popleft()
                cnt += 1
                if idx.count(1) == 0:
                    output.append(str(cnt))
                    break
            else:
                importance.rotate(-1)  # 모든 요소를 하나씩 앞으로 당긴다.
                idx.rotate(-1)

    return output


print("\n".join(que_printer(test_case)))
