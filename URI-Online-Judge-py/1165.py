n = int(input())
for i in range(n):
    aux = 0
    num = int(input())
    for j in range(1,num+1):
        if(num % j == 0):
            aux+= 1
    if(aux  == 2):
        print(num, "eh primo")
    else:
        print(num,"nao eh primo")