# 국영수
# 학생 N명의 이름과 국여, 영어, 수학 점수가 주어진다.
# 이때, 다음과 같은 조건으로 학생의 성적을 정렬하는 프로그램을 작성하시오.
'''
1. 국어 점수가 감소하는 순서로
2. 국어 점수가 같으면 영어 점수가 증가하는 순서로
3. 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로
4. 모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로
    (단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다.)
'''

import sys
from operator import itemgetter

N = int(sys.stdin.readline())
students = []

for i in range(N):
    info = sys.stdin.readline().split()
    info[1] = int(info[1])
    info[2] = int(info[2])
    info[3] = int(info[3])
    students.append(info)

students = sorted(students, key=itemgetter(0))
students = sorted(students, key=itemgetter(3), reverse=True)
students = sorted(students, key=itemgetter(2))
for i in sorted(students, key=itemgetter(1), reverse=True):
    print(i[0])
