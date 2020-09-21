direcoes = ["N","L","S","O"]

while True:
    numComandos = int(input())
    if(numComandos == 0):
        break
    
    inicio = 1
    comandos = input()

    for i in range(numComandos):
        if(comandos[i] == 'D'):
            inicio +=1
            if(inicio > 4):
                inicio = 1
        else:
            inicio -=1
            if(inicio == 0):
                inicio = 4
    
    print(direcoes[inicio-1])
