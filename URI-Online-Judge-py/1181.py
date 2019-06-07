a = [[0 for y in range(12)] for x in range(12)]
letra = str(input())
soma=0
for x in range(12):
    for y in range(12):
        a[x][y]=float(input())
for x in range(12):
    for y in range(12):
        if y>x:
            soma+=a[x][y]

if(letra=='S'):
    print("{:.1f}".format(soma))
if(letra=='M'):
    print("{:.1f}".format(soma/66))