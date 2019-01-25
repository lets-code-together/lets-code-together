# 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
# 테스트 케이스 개수가 주어지지 않는다.

while True :
    try :
        A, B = map(int, input().split())
        print(A+B)
    except EOFError :
        break
