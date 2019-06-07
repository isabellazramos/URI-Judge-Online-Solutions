lanche = input().split(" ")
codigo=int(lanche[0])
quantidade=int(lanche[1])

if codigo == 1:
    resultado = 4*quantidade
    print("Total: R$","%.2f"%resultado)

if codigo == 2:
    resultado = 4.50*quantidade
    print("Total: R$","%.2f"%resultado)
if codigo == 3:
    resultado = 5*quantidade
    print("Total: R$","%.2f"%resultado)
if codigo == 4:
    resultado = 2*quantidade
    print("Total: R$","%.2f"%resultado)
if codigo == 5:
    resultado = 1.50*quantidade
    print("Total: R$","%.2f"%resultado)
