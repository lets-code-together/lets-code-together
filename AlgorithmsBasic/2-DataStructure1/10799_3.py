# 쇠막대기
# 쇠막대기와 레이저의 배치를 나타내는 괄호 표현이 주어졌을 때,
# 잘려진 쇠막대기 조각의 총 개수를 구하는 프로그램을 작성하시오.
# 레이저는 여는 괄호와 닫는 괄호의 인접한 쌍 '()' 으로 표현된다.
# 쇠막대기의 왼쪽 끝은 여는 괄호 '(' 로, 오른쪽 끝은 닫힌 괄호 ')' 로 표현된다.

ps = list(input())
list = []  # 잘린 쇠막대기의 개수를 셀 리스트
result = 0

for i in range(len(ps)):
    if ps[i] == '(':
        list.append('(')
    # ')' 가 나왔을 떄, 쇠막대기의 끝을 나타내는지 레이저를 나타내는지 구분
    elif ps[i]  == ')':
        # 레이저
        if ps[i-1] =='(':
            list.remove('(')
            result += len(list)  # 현재까지의 쇠막대기 조각 개수만큼 더한다
        # 쇠막대기의 끝
        elif ps[i-1] ==')':
            list.remove('(')
            result += 1  # 쇠막대기의 오른쪽 끝이므로 1씩 더한다.

print(result)