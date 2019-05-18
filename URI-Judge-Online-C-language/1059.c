#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,i;
    numero = 1;
    for (i=1;i<101;i++){
        if (numero % 2 ==0){
            printf("%d\n",numero);
        }
        numero++;
    }
}
