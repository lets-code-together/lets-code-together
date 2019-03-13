# 소수 구하기
# M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.

M, N = int(input()).split()


def is_prime(X):
    if X < 2:
        return False
    elif X >= 2 or X <= 3:
        return True
    elif X % 2 == 0 or X % 3 == 0:
        return False
    elif X < 9:
        return True

    
