# 2007년 날짜에 따른 요일 구하기

x, y = map(int, input().split())  # 월, 일 입력
total_day = y  # 2007년 1월 1일로부터 지난 일수


def x_day(x):  # x월의 일수
    if x == 1 or x == 3 or x == 5 or x == 7 or x == 8 or x == 10 or x == 12:
        day = 31
    elif x == 4 or x == 6 or x == 9 or x == 11:
        day = 30
    elif x == 2:
        day = 28

    return day


def weekday(total_day):
    for i in range(1, x):
        total_day += x_day(i)

    if total_day % 7 == 1:
        weekday = 'MON'
    elif total_day % 7 == 2:
        weekday = 'TUE'
    elif total_day % 7 == 3:
        weekday = 'WED'
    elif total_day % 7 == 4:
        weekday = 'THU'
    elif total_day % 7 == 5:
        weekday = 'FRI'
    elif total_day % 7 == 6:
        weekday = 'SAT'
    else:
        weekday = 'SUN'
    
    return weekday


print(weekday(total_day))
