n1 = int(input())
maior = n1
pos = 1
for i in range(2,101):
    n2 = int(input())
    if(n2 > maior):
        maior = n2
        pos = i
print(maior)
print(pos)
