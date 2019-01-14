# 세 자연수 A x B x C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번 쓰였는지 구하기

A = int(input())
B = int(input())
C = int(input())


def count_array(A, B, C):
    num = list(str(A * B * C))
    num_count = []
    for i in range(10):
        num_count.append(str(num.count(str(i))))

    return num_count


print("\n".join(count_array(A, B, C)))
