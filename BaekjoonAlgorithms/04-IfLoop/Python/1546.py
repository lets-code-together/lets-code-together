# 조작한 점수의 평균 구하기

N = int(input())  # 시험 본 과목 수
test_score = list(map(int, input().split()))  # 현재 성적


def new_score(score):
    M = max(score)
    new_score = list(map(lambda x: (x / M) * 100, score))
    sum = 0

    for i in new_score:
        sum += i
    new_avg = sum / N

    return new_avg


print("%0.2f" % new_score(test_score))
