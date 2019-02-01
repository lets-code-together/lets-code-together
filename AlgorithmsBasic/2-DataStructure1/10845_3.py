# 정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
# 명령은 총 여섯 가지

N = int(input())  # 명령의 수
queue = []


# push X
def push(X):
    queue.append(X)


# pop
def pop():
    try:
        print(queue.pop(0))
    except:
        print(-1)


# size
def size():
    print(len(queue))


# empty
def empty():
    if len(queue) == 0:
        print("1")
    else:
        print("0")


# front
def front():
    try:
        print(queue[0])
    except:
        print(-1)


# back
def back():
    try:
        print(queue[-1])
    except:
        print(-1)

for i in range(N):
    command = input().split()

    if command[0] == 'push':
        push(command[1])
    elif command[0] == 'pop':
        pop()
    elif command[0] == 'size':
        size()
    elif command[0] == 'empty':
        empty()
    elif command[0] == 'front':
        front()
    elif command[0] == 'back' :
        back()
