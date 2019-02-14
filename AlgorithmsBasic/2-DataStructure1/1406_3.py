# 에디터
# 초기에 편집기에 입력되어 있는 문자열이 주어지고, 그 이후 입력한 명령어가 차례로 주어졌을 때,
# 모든 명령어를 수행하고 난 후 편집기에 입력되어 있는 문자열을 구하는 프로그램을 작성하시오.
# 단, 명령어가 수행되기 전에 커서는 문장의 맨 뒤에 위치하고 있다고 한다.
'''
L	커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
D	커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
B	커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
P $	$라는 문자를 커서 왼쪽에 추가함
'''

left_str = list(input())  # 초기에 편집기에 입력되어 있는 문자열
right_str = []  # 커서의 오른쪽에 위치하는 문자열
N = int(input())  # 입력할 명령어의 개수

for _ in range(N):
    cmd = input().split()

    if cmd[0] == 'L':
        if len(left_str) == 0:
            continue
        c = left_str.pop()
        right_str.append(c)
    elif cmd[0] == 'D':
        if len(right_str) == 0:
            continue
        c = right_str.pop()
        left_str.append(c)
    elif cmd[0] == 'B':
        if len(left_str) == 0:
            continue
        left_str.pop()
    elif cmd[0] == 'P':
        left_str.append(cmd[1])

while left_str:
    c = left_str.pop()
    right_str.append(c)

output = ''

while right_str:
    output += right_str.pop()

print(output)

# 시간초과.....
