# 최대공약수와 최소공배수
# 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

a, b = map(int, input().split())


# 최대공약수 - 유클리드 호제법 이용
def gcd(x, y):
    while y != 0:
        if x < y:
            x, y = y, x

        else:
            temp = y
            y = x % y
            x = temp

    if y == 0:
        gcd_answer = x

    return gcd_answer


# 최소공배수
def lcm(x, y):
    lcm_answer = (x * y)/gcd(x, y)

    return int(lcm_answer)


print(gcd(a, b))
print(lcm(a, b))
