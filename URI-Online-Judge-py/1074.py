n = int(input())

for i in range(n):
    n2 = int(input())
    if(n2 > 0):
        if(n2 % 2 ==0):
            print("EVEN POSITIVE")
        if(n2 % 2 !=0):
            print("ODD POSITIVE")
    if(n2 < 0):
        if(n2 % 2 ==0):
            print("EVEN NEGATIVE")
        if(n2 % 2 !=0):
            print("ODD NEGATIVE")
    if(n2 == 0):
        print("NULL")
