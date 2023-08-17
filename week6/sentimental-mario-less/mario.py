import cs50

def main():
    n = getnumber()
    buildblock(n)









def getnumber():
    while True:
        n = cs50.get_int("What number? ")
        if n > 1:
            return n
        elif n < 8:
            return n

def buildblock(n):
    m = 1
    for x in range(n):
        print(" " * (n-1) + "#" * m)
        n = n - 1
        m = m + 1


main()