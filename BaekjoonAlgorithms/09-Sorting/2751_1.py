# N개의 수를 오름차순으로 정렬하기
# 병합 정렬 사용
# 왜 안되지...+ 시간초과...
import sys

N = int(sys.stdin.readline())  # 수의 개수
arr = []
for i in range(N):
    arr.append(int(sys.stdin.readline()))


def merge_sort(arr):
    if len(arr) > 1:  # 요소의 개수가 2개 이상인 경우
        center = len(arr)//2
        left = arr[:center]
        right = arr[center:]

        l = merge_sort(left)  # 앞부분에 대한 병합 정렬
        r = merge_sort(right)  # 뒷부분에 대한 병합 정렬
        return merge(l, r)
    else:
        return arr


def merge(left, right):
    l_idx = 0  # 앞부분의 인덱스
    r_idx = 0  # 뒷부분의 인덱스
    output = []

    while l_idx < len(left) & r_idx < len(right):
        if left[l_idx] < right[r_idx]:
            output.append(left[l_idx])
            l_idx += 1
        else:
            output.append(right[r_idx])
            r_idx += 1

    while l_idx < len(left):
        output.append(left[l_idx])
        l_idx += 1

    while r_idx < len(right):
        output.append(right[r_idx])
        r_idx += 1

    return output


print(merge_sort(arr))
