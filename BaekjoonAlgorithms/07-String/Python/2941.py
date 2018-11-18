# 입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력하기
# 모르게써 푸는중

word = input()


def croatian_num(word):
    croa = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
    count = 0  # 크로아티아 알파벳 개수

    for i in croa:
        if i in word:
            count += 1
        else:


    return count


print(croatian_num(word))
