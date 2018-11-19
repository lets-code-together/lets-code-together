# 단어에서 가장 많이 사용된 알파벳 출력하기

word = input()


def most_used(word):
    alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
                'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    word = word.upper()  # 소문자를 대문자로 바꾸기
    word_count = {}  # 각 알파벳 사용된 횟수 dict

    for ABC in alphabet:
        word_count[ABC] = word.count(ABC)

    most_used = [ABC for ABC, count in word_count.items() if count == max(word_count.values())]

    if len(most_used) == 1:
        return most_used[0]
    else:
        return "?"  # 가장 많이 사용된 알파벳이 여러 개 존재하는 경우 ? 출력


print(most_used(word))
