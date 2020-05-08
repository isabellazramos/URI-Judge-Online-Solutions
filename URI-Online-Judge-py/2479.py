n = int(input())
lista = []
scomp = 0
ncomp = 0
for i in range(n):
    n2 = input().split(" ")
    if(n2[0] == '+'):
        scomp = scomp + 1
    if(n2[0] == '-'):
        ncomp = ncomp + 1
    lista.append(n2[1])
lista = sorted(lista)
for i in range(n):
    print(lista[i])
print("Se comportaram: %d | Nao se comportaram: %d" %(scomp,ncomp)) 
