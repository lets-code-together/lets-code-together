# OX퀴즈의 결과가 주어졌을 때, 점수 구하기
# O가 연속으로 나오면 점수는 연속된 O의 개수가 된다.

test_count = int(input())  # 테스트 개수
test = []  # 각 테스트의 점수
for i in range(test_count):
    test.append(list(input()))


def ox_score(test):
    each_score = []
    for i in range(len(test)):
        score = 0  # 점수
        x = 0  # O가 나오면 +1, X가 나오면 초기화할 변수
        for j in range(len(test[i])):
            if test[i][j] == 'O':
                x += 1
                score += x
            if test[i][j] == 'X':
                x = 0
        print(score)


ox_score(test)
