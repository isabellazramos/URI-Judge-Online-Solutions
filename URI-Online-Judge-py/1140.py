while True:
    entrada = input().split(" ")
    
    if(entrada[0] == "*"):
        break
    
    tam = len(entrada)
    flag = 0
    while True:
        for i in range(1,tam):
            palavra = entrada[i-1].lower()
            palavra2 = entrada[i].lower()

            if(palavra[0] != palavra2[0]):
                print("N")
                flag = 1
                break
        break
    if(flag != 1 ):
        print("Y")
