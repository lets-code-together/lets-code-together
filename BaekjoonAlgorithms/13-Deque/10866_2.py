# 정수를 저장하는 덱을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

a = int(input())
Deque = []


def push_front(n):
    Deque.insert(0, n)


def push_back(n):
    Deque.append(n)


def pop_front():
    try:
        print(Deque.pop(0))
    except:
        print(-1)


def pop_back():
    try:
        print(Deque.pop(-1))
    except:
        print(-1)


def size():
    return len(Deque)


def empty():
    if size() == 0:
        print("1")
    else:
        print("0")


def front():
    try:
        print(Deque[0])
    except:
        print(-1)


def back():
    try:
        print(Deque[-1])
    except:
        print(-1)


for _ in range(a):
    cmd = input().split()
    
    if cmd[0] == 'push_front':
        push_front(cmd[1])
    elif cmd[0] == 'push_back':
        push_back(cmd[1])
    elif cmd[0] == 'pop_front':
        pop_front()
    elif cmd[0] == 'pop_back':
        pop_back()
    elif cmd[0] == 'size':
        print(size())
    elif cmd[0] == 'empty':
        empty()
    elif cmd[0] == 'front':
        front()
    elif cmd[0] == 'back' :
        back()
