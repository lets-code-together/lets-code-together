# 대소문자와 띄어쓰기로 이루어진 문자열에서 단어의 개수 찾기


def word_num():
    word_array = list(map(str, input().split()))

    return len(word_array)


print(word_num())
