#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i,aux;
    scanf("%d",&numero);
    aux = 1;
    for (i=0;i<numero;i++){
        if(numero % aux == 0){
            printf("%d\n",aux);
        }
        aux++;
    }
}
