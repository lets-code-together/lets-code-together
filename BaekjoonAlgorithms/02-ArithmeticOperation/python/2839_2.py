# 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
# 상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.
# 최대한 적은 봉지를 들고 가려고 한다.

N = int(input())  # 배달해야 하는 설탕 무게
count = 0  # 들고 갈 봉지의 개수
three_kilo = 0  # 3킬로그램 봉지 수

if N % 5 == 0 :  # 5킬로그램 봉지만을 가져가는 경우
    count = int(N / 5)

else:

    while N >= 0 :
        N = N - 3
        three_kilo = three_kilo + 1

        if N % 5 == 0 :  # 5킬로그램 봉지와 3킬로그램 봉지를 가져가는 경우
            count = three_kilo + int(N / 5)
            break

        elif N > 3 :
            continue

        elif N == 3 :  # 3킬로그램 봉지만을 가져가는 경우
            count = three_kilo + 1
            break

        else :  # 정확하게 N킬로그램을 만들 수 없는 경우
            count = -1

print(count)
