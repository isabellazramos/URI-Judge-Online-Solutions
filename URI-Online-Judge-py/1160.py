import math

t=int(input())
a = input().split()
for i in range(0,t):
    PA = int(a[0])
    PB = int(a[1])
    G1 = float(a[2]) * 0.01
    G2 = float(a[3]) * 0.01
    j=0
    while PA<=PB:
        PA+=math.floor(PA*(G1))
        PB+=math.floor(PB*(G2))
        j+=1
        if (j > 100):
            break
    if(j<=100):
        print(j,"anos.")
    else:
        print("Mais de 1 seculo.")
    a = input().split()
