n = int(input())
for i in range(n):
    palavra = input()
    resposta = ""
    for j in range(len(palavra)):
        if(len(resposta) >= 12):
            break
        if ((palavra[j] == 'a') or (palavra[j] == 'G') or (palavra[j] == 'Q') or (palavra[j] == 'k') or (
                palavra[j] == 'u')):
            resposta += '0'
        if ((palavra[j] == 'I') or (palavra[j] == 'S') or (palavra[j] == 'b') or (palavra[j] == 'l') or (
                palavra[j] == 'v')):
            resposta += '1'
        if ((palavra[j] == 'E') or (palavra[j] == 'O') or (palavra[j] == 'Y') or (palavra[j] == 'c') or (
                palavra[j] == 'm') or (palavra[j] == 'w')):
            resposta += '2'
        if ((palavra[j] == 'F') or (palavra[j] == 'P') or (palavra[j] == 'Z') or (palavra[j] == 'd') or (
                palavra[j] == 'n') or (palavra[j] == 'x')):
            resposta += '3'
        if ((palavra[j] == 'J') or (palavra[j] == 'T') or (palavra[j] == 'e') or (palavra[j] == 'o') or (
                palavra[j] == 'y')):
            resposta += '4'
        if ((palavra[j] == 'D') or (palavra[j] == 'N') or (palavra[j] == 'X') or (palavra[j] == 'f') or (
                palavra[j] == 'p') or (palavra[j] == 'z')):
            resposta += '5'
        if ((palavra[j] == 'A') or (palavra[j] == 'K') or (palavra[j] == 'U') or (palavra[j] == 'q') or (
                palavra[j] == 'g')):
            resposta += '6'
        if ((palavra[j] == 'C') or (palavra[j] == 'M') or (palavra[j] == 'W') or (palavra[j] == 'h') or (
                palavra[j] == 'r')):
            resposta += '7'
        if ((palavra[j] == 'B') or (palavra[j] == 'L') or (palavra[j] == 'V') or (palavra[j] == 'i') or (
                palavra[j] == 's')):
            resposta += '8'
        if (palavra[j] == 'H') or (palavra[j] == 'R') or (palavra[j] == 'j') or (palavra[j] == 't'):
            resposta += '9'
    print(resposta)