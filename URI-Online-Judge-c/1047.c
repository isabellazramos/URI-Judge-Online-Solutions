#include <stdio.h>

int main(){
    int inicio,mininicio, fim, minfim, totalinicio, totalfim, total;
    scanf("%d %d %d %d", &inicio,&mininicio,&fim, &minfim);
    totalinicio = (inicio * 60) + mininicio;
    totalfim = (fim * 60) + minfim;
    if(totalfim > totalinicio){
        total = totalfim - totalinicio;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total/60,total%60);
    }
    if(totalfim < totalinicio){
        total = (1440-totalinicio)+totalfim;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",total/60,total%60);
    }
    if(totalfim == totalinicio){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
return 0;

}
