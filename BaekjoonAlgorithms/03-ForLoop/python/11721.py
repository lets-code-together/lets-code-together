# ������ ���� �߷��ϱ�

word = list(input()) # �ܾ� �Է�

# �� �ٿ� ���� ������ ���ΰ�
def 10_print(word):
    N = len(word)
    
    if N % 10 == 0:
        re = N
    else:
        re = int(N /10) + 1

    for i in range(re):
        print(word[10*i:10*(i+1)])

10_print(word)

