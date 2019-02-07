# 정수를 저장하는 덱을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
# 명령은 총 여덟 가지

N = int(input())  # 명령의 수
Deque = []


# push_front X
def push_front(X):
    Deque.insert(0, X)


# push_back
def push_back(X):
    Deque.append(X)


# pop_front
def pop_front():
    try:
        print(Deque.pop(0))
    except:
        print(-1)


# pop_back
def pop_back():
    try:
        print(Deque.pop(-1))
    except:
        print(-1)


# size
def size():
    print(len(Deque))


# empty
def empty():
    if len(Deque) == 0:
        print("1")
    else:
        print("0")


# front
def front():
    try:
        print(Deque[0])
    except:
        print(-1)


# back
def back():
    try:
        print(Deque[-1])
    except:
        print(-1)


for i in range(N):
    command = input().split()
    if command[0] == 'push_front':
        push_front(command[1])
    elif command[0] == 'push_back':
        push_back(command[1])
    elif command[0] == 'pop_front':
        pop_front()
    elif command[0] == 'pop_back':
        pop_back()
    elif command[0] == 'size':
        size()
    elif command[0] == 'empty':
        empty()
    elif command[0] == 'front':
        front()
    elif command[0] == 'back' :
        back()
