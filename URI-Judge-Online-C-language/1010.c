#include <stdio.h>

int main(){
    int codigo;
    int numero;
    float valorunitario;
    float totalpc;
    float totalpc2;
    float total;


    scanf("%d %d %f", &codigo,&numero,&valorunitario);
    totalpc=numero*valorunitario;
    scanf("%d %d %f", &codigo,&numero,&valorunitario);
    totalpc2=numero*valorunitario;

    total=totalpc+totalpc2;

    printf("VALOR A PAGAR: R$ %.2f\n",total);


return 0;
}
