# 정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하라

N = int(input())  # 명령의 수
command = []
for i in range(N):  # N개의 명령 입력
    command.append(input().split())


def que(command):
    que = []  # 큐 리스트
    output = []  # 출력 저장

    for idx in command:
        if idx[0] == 'push':  # 정수 X를 큐에 넣는다.
            que.append("%s" % idx[1])
        elif idx[0] == 'pop':  # 가장 위에 있는 정수를 뺀다.
            if len(que) == 0:
                output.append("-1")
            else:
                output.append("%s" % que[0])
                del que[0]
        elif idx[0] == 'size':  # 큐에 들어있는 정수의 개수를 출력한다.
            output.append("%s" % len(que))
        elif idx[0] == 'empty':  # 큐가 비어 있으면 1, 그렇지 않으면 0을 출력한다.
            if len(que) == 0:
                output.append("1")
            else:
                output.append("0")
        elif idx[0] == 'front':  # 가장 앞에 있는 정수를 출력한다.
            if len(que) == 0:
                output.append("-1")
            else:
                output.append("%s" % que[0])
        elif idx[0] == 'back':  # 가장 뒤에 있는 정수를 출력한다.
            if len(que) == 0:
                output.append("-1")
            else:
                output.append("%s" % que[-1])

    return output


print("\n".join(que(command)))
