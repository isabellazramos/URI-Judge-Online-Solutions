#include <stdio.h>

main(){

int distancia;
double combustivel,calculo;

scanf("%d %lf", &distancia,&combustivel);
calculo=distancia/combustivel;

printf("%.3lf km/l\n",calculo);

return 0;
}
