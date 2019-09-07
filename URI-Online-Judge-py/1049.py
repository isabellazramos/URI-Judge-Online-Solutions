entrada1 = input()
entrada2 = input()
entrada3 = input()

if(entrada1 == "vertebrado"):
    if (entrada2 == "ave"):
        if(entrada3 == "carnivoro"):
            print("aguia")
        elif(entrada3 == "onivoro"):
            print("pomba")
    elif(entrada2 == "mamifero"):
        if (entrada3 == "onivoro"):
            print("homem")
        elif (entrada3 == "herbivoro"):
            print("vaca")
if(entrada1 == "invertebrado"):
    if (entrada2 == "inseto"):
        if(entrada3 == "hematofago"):
            print("pulga")
        elif(entrada3 == "herbivoro"):
            print("lagarta")
    elif(entrada2 == "anelideo"):
        if (entrada3 == "hematofago"):
            print("sanguessuga")
        elif (entrada3 == "onivoro"):
            print("minhoca")
