# ¿­°³¾¿ ²÷¾î Ãß·ÂÇÏ±â

word = list(input()) # ´Ü¾î ÀÔ·Â

# ¸î ÁÙ¿¡ °ÉÃÄ Ãâ·ÂÇÇÒ °ÍÀÎ°¡
def 10_print(word):
    N = len(word)
    
    if N % 10 == 0:
        re = N
    else:
        re = int(N /10) + 1

    for i in range(re):
        print(word[10*i:10*(i+1)])

10_print(word)

