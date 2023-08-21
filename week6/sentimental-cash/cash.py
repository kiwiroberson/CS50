import cs50

def main():
    change = cs50.get_float("Change owed: ")

    q = change / 0.25
    qr = change % 0.25

    d = qr / 0.1
    dr = qr % 0.1

    n = dr / 0.05
    p = dr % 0.05

    print(q+d+n+p)

main()













main()