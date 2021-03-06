# 조세퍼스 문제
# N과 M이 주어지면 (N,M)-조세퍼스 순열을 구하는 프로그램을 작성하시오.

N, M = map(int, input().split())
people = []  # 앉은 사람 나열
j = []

for i in range(1,N+1):
    people.append(i)

result = '<'
r = []

def josephus():
    while len(people) > 0:
        if len(people) == 1:
            j.append(people.pop())
            break
        else:
            for idx in range(M-1):
                people.append(people[0])
                people.pop(0)

            j.append(people.pop(0))

    while len(j) != 0:
        n = j.pop()
        r.append(n)
        r.append(',')

    r.pop(-1)

josephus()

while len(r) != 0:
    result += str(r.pop())


result += '>'

print(result)

# 시간초과
