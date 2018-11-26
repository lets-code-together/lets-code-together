# 단어 N개를 입력 받아 그룹 단어의 개수 출력하기
# 그룹 단어란 각 문자가 연속해서 나타나는 경우를 말한다.
# ex) 'ccazzzzbb'는 그룹 단어, 'aabbbccb'는 그룹 단어가 아니다.


word_num = int(input())  # 단어의 개수
word = []  # 단어 입력
for i in range(word_num):
    word.append(input())


def group_word(word):
    count = 0  # 그룹 단어 개수
    for i in range(len(word)):
        for j in word[i]:


    return count


print(group_word((word)))
