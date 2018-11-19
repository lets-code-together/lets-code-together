# 문자열 S를 R번 반복해 새 문자열 P 만들기

test_count = int(input())  # 테스트의 개수
test = []
for i in range(test_count):
    test.append(input())


def spring_repeat(test):
    new_spring = []  # 새 문자열 P

    for i in range(len(test)):
        _spring = ""
        for j in range(2, len(test[i])):
            _spring += test[i][j] * int(test[i][0])
        new_spring.append(_spring)

    return new_spring


for i in range(len(test)):
    print(spring_repeat(test)[i])
