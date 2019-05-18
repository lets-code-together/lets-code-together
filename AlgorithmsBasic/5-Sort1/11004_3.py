# k번째 수
# 수 N개가 주어진다.
# 이 수들을 오름차순 정렬했을 때, 앞에서부터 k번째 있는 수를 구하는 프로그램을 작성하시오.

# 시간초과
import sys
N, K = map(int, sys.stdin.readline().split())
A_list = list(sys.stdin.readline())
A = []
for i in A_list:
    try:A.append(int(i))
    except:continue
print(sorted(A)[K-1])


# 메모리초과
import sys
N, K = map(int, sys.stdin.readline().split())
A = list(sys.stdin.readline())
print(sorted(A)[N+K-1])


# 틀렸습니다
import sys
N, K = map(int, sys.stdin.readline().split())
A = sys.stdin.readline()
print(sorted(A)[N+K-1])


# 맞은코드
import sys
N, K = map(int, sys.stdin.readline().split())
A = sys.stdin.readline().split()
A_list = [int(x) for x in A]
print(sorted(A_list)[K-1])

# 뭔 차인지 이해가 안된다...
