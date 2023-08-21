import cs50
import math

def main():
    while True
    change = cs50.get_float("Change owed: ")

    q = math.trunc(change / 0.25)
    qr = round(change % 0.25, 2)

    d = math.trunc(qr / 0.1)
    dr = round(qr % 0.1, 2)

    n = math.trunc(dr / 0.05)
    nr = round(qr % 0.05, 2)

    p = math.trunc(nr / 0.01)

    print(q+d+n+p)













main()