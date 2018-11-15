# 10개씩 끊어 출력하기

word = list(input()) # 단어 입력


def printing_breaks(word):  # 몇 줄에 걸쳐 출력할 것인가
    N = len(word)
    
    if N % 10 == 0:
        re = N
    else:
        re = int(N / 10) + 1

    for i in range(re):
        print(word[10*i:10*(i+1)])


printing_breaks(word)
