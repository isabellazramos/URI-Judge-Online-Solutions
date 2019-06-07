#include <stdio.h>

int main(){

int codigo;
int qtd;
float x;
scanf("%d %d", &codigo, &qtd);
switch(codigo){
    case 1:x=qtd*4;
    printf("Total: R$ %.2f\n",x);
    break;
    case 2:x=qtd*4.50;
    printf("Total: R$ %.2f\n",x);
    break;
    case 3:x=qtd*5;
    printf("Total: R$ %.2f\n",x);
    break;
    case 4:x=qtd*2;
    printf("Total: R$ %.2f\n",x);
    break;
    case 5:x=qtd*1.5;
    printf("Total: R$ %.2f\n",x);
    break;
}
return 0;
}
