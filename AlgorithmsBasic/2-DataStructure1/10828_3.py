# 정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.
# 명령은 총 다섯 가지

N = int(input())  # 명령의 수
stack = []


# push X
def push(X):
    stack.append(X)


# pop
def pop():
    try :
        print(stack.pop())
    except :
        print('-1')


# size
def size():
    print(len(stack))


# empty
def empty():
    if len(stack) == 0 :
        print('1')
    else :
        print('0')


# top
def top():
    try:
        print(stack[-1])
    except:
        print('-1')


for i in range(N) :
    command = input().split()

    if command[0] == 'push' :
        push(command[1])
    elif command[0] == 'pop' :
        pop()
    elif command[0] == 'size' :
        size()
    elif command[0] == 'empty' :
        empty()
    elif command[0] == 'top' :
        top()
