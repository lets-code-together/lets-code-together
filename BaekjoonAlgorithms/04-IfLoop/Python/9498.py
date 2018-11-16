# 시험 성적에 따라 등급 매기기

test_score = int(input())


def grade(x):
    if 90 <= x <= 100:
        grade = 'A'
    elif 80 <= x < 90:
        grade = 'B'
    elif 70 <= x < 80:
        grade = 'C'
    elif 60 <= x < 70:
        grade = 'D'
    else:
        grade = 'F'

    return grade


print(grade(test_score))
