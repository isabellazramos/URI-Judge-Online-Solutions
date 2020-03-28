data01 = input().split(" ")

dia01 = int(data01[1])
horario01 = input().split(" : ")

horas01 = int(horario01[0])
minutos01 = int(horario01[1])
segundos01 = int(horario01[2])

data02 = input().split(" ")

dia02 = int(data02[1])
horario02 = input().split(" : ")

horas02 = int(horario02[0])
minutos02 = int(horario02[1])
segundos02 = int(horario02[2])

if(dia01 == dia02):
    totalhora01 = (3600 * horas01) + (60 * minutos01) + segundos01
    tempopassado = 86400 - totalhora01
    totalhora02 = (3600 * horas02) + (60 * minutos02) + segundos02
    totalhora = tempopassado + totalhora02
    resposta_dia = 0
else:
    totalhora01 = (3600 * horas01) + (60 * minutos01) + segundos01
    tempopassado = 86400 - totalhora01
    totalhora02 = (3600 * horas02) + (60 * minutos02) + segundos02

    totalhora = (abs((dia02-1)-dia01)) * 24
    totalhora03 = 3600 * totalhora
    totalhora = tempopassado + totalhora02 + totalhora03
    resposta_dia = totalhora // 86400


totalhora = totalhora % 86400
resposta_hora = totalhora//3600
totalhora = totalhora % 3600
resposta_minutos = totalhora//60
totalhora = totalhora % 60
resposta_segundos = totalhora

print(resposta_dia,"dia(s)")
print(resposta_hora,"hora(s)")
print(resposta_minutos,"minuto(s)")
print(resposta_segundos,"segundo(s)")