n = 1
nota1 = -1
nota2 = -1
while n != 2:
    media = 0
    nota1 = -1
    nota2 = -1
    while nota1 < 0 or nota1 > 10:
        nota1 = float(input())
        if nota1 < 0 or nota1 > 10:
            print("nota invalida")
    while nota2 < 0 or nota2 > 10:
        nota2 = float(input())
        if nota2 < 0 or nota2 > 10:
            print("nota invalida")
    media = (nota1 + nota2)/2
    print("media =","{0:.2f}".format(media))
    while n != 1 or n != 2:
        print("novo calculo (1-sim 2-nao)")
        n = int(input())
        if n == 1 or n == 2:
            break