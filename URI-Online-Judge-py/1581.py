casos_teste = int(input())
accept = 0
vetor =[]

for i in range (casos_teste):
    k = int(input())
    for j in range(k):
        aux = input()
        vetor.append(aux)
    for l in range(1,k):
        if(vetor[l-1] != vetor[l]):
            print("ingles")
            accept = 0
            break
        elif(vetor[l-1] == vetor[l]):
            accept = 1
    if(accept == 1):
        print(vetor[0])
    accept = 0
    vetor = []
