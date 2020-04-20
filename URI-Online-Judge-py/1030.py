n = int(input())

for i in range(n):
    entrada1 = input().split()
    x = int(entrada1[0])
    y = int(entrada1[1])

    resultado = 0
    for j in range(2,x+1):
        resultado = (resultado + y) % j

    print("Case {0}:".format(i+1),"{0}".format(resultado+1))