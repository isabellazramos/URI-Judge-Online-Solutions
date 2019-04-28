valor = input().split(" ")

x = int(valor[0])
y = int(valor[1])

for i in range(1,y+1):
    if(i%x==0):
        print(i)
    else:
        print(i,end=" ",flush=False)