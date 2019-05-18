#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i,aux;
    scanf("%d",&numero);
    aux = 1;
    for (i=0;i<numero;i++){
        printf("%d %d %d\n",aux,aux*aux,aux*aux*aux);
        aux++;
    }
}
