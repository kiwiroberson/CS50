import cs50
import math

def main():
    change = cs50.get_float("Change owed: ")

    q = math.trunc(change / 0.25)
    qr = change % 0.25

    d = math.trunc(qr / 0.1)
    dr = qr % 0.1

    n = trunc(dr / 0.05)
    p = dr % 0.05

    print(q)
    print(d)
    print(n)
    print(p)
    print()
    print(q+d+n+p)













main()