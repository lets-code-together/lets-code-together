# 수 정렬하기2
# N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
# 직접 퀵소트 구현하기

def quickSort(list, start, end):
    if start < end:
        left = start
        pivot = list[end]
        for i in range(start, end):
            if list[i] < pivot:
                list[i], list[left] = list[left], list[i]
                left += 1
        list[left], list[end] = list[end], list[left]
        quickSort(list, start, left-1)
        quickSort(list, left+1, end)

N = int(input())
list = []
for i in range(N):
    list.append(int(input()))
quickSort(list, 0, N-1)
for i in range(N):
    print(list[i])
