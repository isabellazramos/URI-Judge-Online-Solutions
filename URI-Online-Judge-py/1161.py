import math
while True:
    try:
        n = input().split()
        n1 = int(n[0])
        n2 = int(n[1])
        n1 = math.factorial(n1)
        n2 = math.factorial(n2)
        print(n1+n2)
    except EOFError:
        break