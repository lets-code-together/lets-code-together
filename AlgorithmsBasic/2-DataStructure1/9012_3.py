# 괄호
# 입력으로 주어진 괄호 문자열이 VPS 인지 아닌지를 판단해서 그 결과를 YES 와 NO 로 나타내기

T = int(input())  # 테스트 케이스 수

for i in range(T):
    ps = list(input())

    while ps != []:
        # 입력받은 문자열이 )로 시작하면 무조건 NO
        if ps[0] == ')':
            print('NO')
            break
        # 괄호 문자쌍을 하나씩 제거해나감
        else:
            if '(' in ps:
                try:
                    ps.remove(')')
                    ps.remove('(')
                except:
                    print('NO')
                    break

    if ps == []:
        print('YES')
