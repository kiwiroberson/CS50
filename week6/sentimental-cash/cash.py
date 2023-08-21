import cs50

def main():
    change = cs50.get_float("Change owed: ")

    q = round(change / 0.25)
    qr = change % 0.25

    d = round(qr / 0.1)
    dr = qr % 0.1

    n = round(dr / 0.05)
    p = dr % 0.05

    print(q)
    print(d)
    print(n)
    print(p)
    print()
    print(q+d+n+p)













main()