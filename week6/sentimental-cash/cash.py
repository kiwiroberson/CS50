import cs50
import math

def main():
    change = 0
    while change <= 0:
        change = cs50.get_float("Change owed: ")


    q = math.trunc(change / 0.25)
    qr = change - q * 0.25

    d = math.trunc(qr / 0.1)
    dr = qr - d * 0.1

    n = math.trunc(dr / 0.05)
    nr = dr - n * 0.05

    p = math.trunc(nr / 0.01)

    print(q+d+n+p)
    print(nr)













main()