# 정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
a = int(input())
list = []

def push(n):
    list.append(n)

def pop():
    try:
        print(list.pop(0))
    except:
        print(-1)

def size():
    return len(list)

def empty():
    if size() == 0:
        print("1")
    else:
        print("0")

def front():
    try:
        print(list[0])
    except:
        print(-1)

def back():
    try:
        print(list[-1])
    except:
        print(-1)

for _ in range(a):
    cmd = input().split()
    if cmd[0] == 'push':
        push(cmd[1])
    elif cmd[0] == 'pop':
        pop()
    elif cmd[0] == 'size':
        print(size())
    elif cmd[0] == 'empty':
        empty()
    elif cmd[0] == 'front':
        front()
    elif cmd[0] == 'back' :
        back()
