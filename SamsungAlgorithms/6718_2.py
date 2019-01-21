# 어떤 물체와의 거리가 주어질 때, 수치를 매기는 프로그램을 작성하라.

T = int(input())  # 테스트 케이스의 수


def distance(d) :  # 물체와의 거리

    if d < 100 :
        d = 0
    elif 100 <= d < 1000 :
        d = 1
    elif 1000 <= d < 10000 :
        d = 2
    elif 10000 <= d < 100000 :
        d = 3
    elif 100000 <= d < 1000000 :
        d = 4
    else :
        d = 5

    return d


for i in range(T) :
    d = int(input())
    print('#%d %d' % (i+1, distance(d)))
