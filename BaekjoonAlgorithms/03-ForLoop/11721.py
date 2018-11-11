word = list(input()) # 단어 입력
N = len(word) # 단어의 길이

# 몇 줄에 걸쳐 출력할 것인가
if N % 10 == 0:
    re = N
else:
    re = int(N /10) + 1

for i in range(re):
    print(word[10*i:10*(i+1)])
