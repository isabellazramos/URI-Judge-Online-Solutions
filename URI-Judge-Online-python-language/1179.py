m=5
par = [0 for x in range(m)]
impar = [0 for x in range(m)]
n=0
p = 0
i = 0
while n!=15:
    x = int(input())
    if x % 2 ==0:
        par[p]=x
        if p==4:
            for b in range(p+1):
                print("par[{}] = {}".format(b,par[b]))
            p=0
        else:
            p+=1


    elif x%2 !=0:
        impar[i]=x
        if i==4:
            for b in range(i+1):
                print("impar[{}] = {}".format(b,impar[b]))
            i=0
        else:
            i+=1
    n+=1
for c in range(i):
    print("impar[{}] = {}".format(c, impar[c]))
for c in range(p):
    print("par[{}] = {}".format(c, par[c]))

