# 최대공약수와 최소공배수
# 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
# 재귀 호출을 이용한 풀이

a, b = map(int, input().split())


def gcd(x, y):
    if x < y:
        x, y = y, x

    if x % y != 0:
        return gcd(y, x % y)
    else:
        return y


def lcm(x, y):
    lcm_answer = (x * y)/gcd(x, y)

    return int(lcm_answer)


print(gcd(a, b))
print(lcm(a, b))
