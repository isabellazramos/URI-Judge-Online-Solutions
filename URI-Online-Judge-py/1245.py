while True:
    try:
        n = int(input())
        esquerdo = []
        direito = []
        pares = 0
        for i in range(n):
            entrada = input().split()

            numero = int(entrada[0])
            sentido = str(entrada[1])
            if sentido == 'E':
                esquerdo.append(numero)
            if sentido == 'D':
                direito.append(numero)

        for i in direito:
            if i in esquerdo:
                pares += 1
                esquerdo.remove(i)
        print(pares)
    except EOFError:
        break
