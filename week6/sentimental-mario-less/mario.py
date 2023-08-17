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
    for x in range(n):
        print(" " * (n-1) + "#" )
        n = n - 1


main()