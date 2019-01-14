# 다이얼을 걸기 위해서 필요한 시간 구하기

word = input()  # 문자열 입력


def dial_time(word):
    number = []  # 문자열을 바꾼 번호
    for i in word:
        if i == 'A' or i == 'B' or i == 'C':
            number.append(2)
        elif i == 'D' or i == 'E' or i == 'F':
            number.append(3)
        elif i == 'G' or i == 'H' or i == 'I':
            number.append(4)
        elif i == 'J' or i == 'K' or i == 'L':
            number.append(5)
        elif i == 'M' or i == 'N' or i == 'O':
            number.append(6)
        elif i == 'P' or i == 'Q' or i == 'R' or i == 'S':
            number.append(7)
        elif i == 'T' or i == 'U' or i == 'V':
            number.append(8)
        elif i == 'W' or i == 'X' or i == 'Y' or i == 'Z':
            number.append(9)

    time = 0
    for j in number:
        time += int(j+1)

    return time


print(dial_time(word))
