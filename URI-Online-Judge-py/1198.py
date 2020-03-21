while True:
    try:
        n = input().split()
        n1 = int(n[0])
        n2 = int(n[1])
        print(abs(n1-n2))
    except EOFError:
        break
