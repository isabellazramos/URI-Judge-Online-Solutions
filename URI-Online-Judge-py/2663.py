num_competidores = int(input())
num_classificados = int(input())

cont = num_classificados

vetor = []

for i in range(num_competidores):
    aux = int(input())
    vetor.append(aux)

vetor.sort()
vetor.reverse()

for i in range(num_classificados,num_competidores):
    if vetor[num_classificados - 1] == vetor[i]:
        cont +=1
print(cont)