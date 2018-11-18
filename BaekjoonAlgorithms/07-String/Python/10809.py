# 단어에서 각각의 알파벳이 등장하는 위치 찾기

word = input()


def alphabet_find(word):
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    for abc in alphabet:
        print(word.find(abc), end=' ')


alphabet_find(word)
