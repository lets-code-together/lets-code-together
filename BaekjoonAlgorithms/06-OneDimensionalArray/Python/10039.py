# 평균 점수 구하기
# 40점 미만이면 40점을 받는다.

A = int(input())
B = int(input())
C = int(input())
D = int(input())
E = int(input())
score = [A, B, C, D, E]

def avg_score(score):
    sum = 0
    for i in range(len(score)):
        if score[i] < 40:
            score[i] = 40
        sum += score[i]
        avg_score = sum / len(score)

    return avg_score


print("%d" % avg_score(score))
