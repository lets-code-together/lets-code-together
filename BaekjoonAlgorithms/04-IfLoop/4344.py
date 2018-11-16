# 평균을 넘는 사람의 비율(틀림)

test_count = int(input())  # 테스트 수
test = []
for i in range(test_count):
    test.append(list(map(int, input().split())))


def exceed_avg(test):
    test_sum = 0
    test_avg = []
    exceed_ratio = []

    for i in range(len(test)):
        for j in range(test[i][0]):
            test_sum += test[i][j+1]
        test_avg.append(test_sum / test[i][0])  # 각 테스트 평균

    count = 0
    for i in range(len(test)):
        for j in range(test[i][0]):
            if test_avg[i] < test[i][j+1]:
                count += 1
        exceed_ratio.append(count / test[i][0] * 100)  # 각 테스트 평균 넘는 비율

    return exceed_ratio


for i in range(test_count):
    print("%0.3f%%" % exceed_avg(test)[i])
