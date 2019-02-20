# 진법 변환 2
# 10진법 수 N이 주어진다. 이 수를 B진법으로 바꿔 출력하는 프로그램을 작성하시오.
# 10진법을 넘어가는 진법은 숫자로 표시할 수 없는 자리가 있다.
# 이런 경우에는 알파벳 대문자를 사용한다.

def convert(N, B):
    T = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    q, r = divmod(N, B)  # 몫, 나머지

    if q == 0:
        return T[r]
    else:
        return convert(q, B) + T[r]


N, B = map(int, input().split())
print(convert(N, B))
