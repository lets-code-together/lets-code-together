# 정수를 저장하는 덱 구현하기
# 파이썬 라이브러리 사용함.
from collections import deque

N = int(input())  # 명령의 수
arr = []  # 명령 리스트
for i in range(N):
    arr.append(input().split())


def deque_integer(command):
    deq = deque()  # 덱
    output = []

    for command in arr:
        if command[0] == 'push_front':  # 정수 X를 덱의 앞에 넣는다.
            deq.appendleft(command[1])
        elif command[0] == 'push_back':  # 정수 X를 덱의 뒤에 넣는다.
            deq.append(command[1])
        elif command[0] == 'pop_front':  # 덱의 가장 앞에 있는 수를 뺀다.
            if len(deq) == 0:
                output.append('-1')
            else:
                output.append(deq.popleft())
        elif command[0] == 'pop_back':  # 덱의 가장 뒤에 있는 수를 뺀다.
            if len(deq) == 0:
                output.append('-1')
            else:
                output.append(deq.pop())
        elif command[0] == 'size':  # 덱에 들어 있는 정수의 개수를 센다.
            output.append(str(len(deq)))
        elif command[0] == 'empty':  # 덱이 비어 있으면 1, 아니면 0을 출력한다.
            if len(deq) == 0:
                output.append('1')
            else:
                output.append('0')
        elif command[0] == 'front':  # 덱의 가장 앞에 있는 정수를 출력한다.
            if len(deq) == 0:
                output.append('-1')
            else:
                output.append(deq[0])
        elif command[0] == 'back':  # 덱의 가장 뒤에 있는 정수를 출력한다.
            if len(deq) == 0:
                output.append('-1')
            else:
                output.append(deq[-1])

    return output


print("\n".join(deque_integer(arr)))
