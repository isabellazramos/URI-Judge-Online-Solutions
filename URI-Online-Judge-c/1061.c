#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia01, horas01,minutos01,segundos01,dia02,horas02,minutos02,segundos02;
    int totalhora01,tempopassado,resposta_hora,resposta_dia,totalhora02,totalhora03,totalhora,resposta_minutos,resposta_segundos;

    scanf("Dia %d", &dia01);
    scanf("%d : %d : %d\n",&horas01,&minutos01,&segundos01);
    scanf("Dia %d",&dia02);
    scanf("%d : %d : %d",&horas02,&minutos02,&segundos02);

    if(dia01 == dia02){
        totalhora01 = (3600 * horas01) + (60 * minutos01) + segundos01;
        tempopassado = 86400 - totalhora01;
        totalhora02 = (3600 * horas02) + (60 * minutos02) + segundos02;
        totalhora = tempopassado + totalhora02;
        resposta_dia = 0;
    }else{
        totalhora01 = (3600 * horas01) + (60 * minutos01) + segundos01;
        tempopassado = 86400 - totalhora01;
        totalhora02 = (3600 * horas02) + (60 * minutos02) + segundos02;

        totalhora = (abs((dia02 - 1) - dia01)) * 24;
        totalhora03 = 3600 * totalhora;
        totalhora = tempopassado + totalhora02 + totalhora03;
        resposta_dia = totalhora/86400;
    }
    totalhora = totalhora % 86400;
    resposta_hora = totalhora/3600;
    totalhora = totalhora % 3600;
    resposta_minutos = totalhora / 60;
    totalhora = totalhora % 60;
    resposta_segundos = totalhora;

    printf("%d dia(s)\n",resposta_dia);
    printf("%d hora(s)\n",resposta_hora);
    printf("%d minuto(s)\n",resposta_minutos);
    printf("%d segundo(s)\n",resposta_segundos);
}
