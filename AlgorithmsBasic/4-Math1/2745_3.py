# 진법 변환
# B진법 수 N이 주어진다. 이 수를 10진법으로 바꿔 출력하는 프로그램을 작성하시오.

num, base = input().split()
print(int(num, base))
