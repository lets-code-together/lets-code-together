# 문자열 S를 R번 반복해 새 문자열 P 만들기

test_count = int(input())  # 테스트의 개수
test = []
for i in range(test_count):
    test.append(input())


def spring_repeat(test):
    for i in range(len(test)):
        for j in range(2, len(test[i])):
            print(test[i][j] * int(test[i][0]), end='')
        print()


spring_repeat(test)
