import cs50
import math

def main():
    change = cs50.get_float("Change owed: ")

    q = math.trunc(change / 0.25)
    qr = change % 0.25

    d = math.trunc(qr / 0.1)
    dr = qr % 0.1

    n = math.trunc(dr / 0.05)
    nr = qr % 0.05

    p = math.trunc(nr / 0.01)

    print(q)
    print(qr)
    print(d)
    print(dr)
    print(n)
    print(nr)
    print(p)
    print()
    print(q+d+n+p)













main()