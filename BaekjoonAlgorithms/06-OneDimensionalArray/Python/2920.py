# 다장조 음계 판별하기

number = list(map(str, input().split()))  # 숫자로 나타낸 음계 입력


def musical_scales(number):
    scale = "".join(number)

    if scale == '12345678':
        return "ascending"
    elif scale == '87654321':
        return "descending"
    else:
        return "mixed"


print(musical_scales(number))
