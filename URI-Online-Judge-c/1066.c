#include <stdio.h>

int main(){

    int i,n,n_par,n_impar,n_posi,n_neg;
    n_par=0;n_impar=0;n_posi=0;n_neg=0;
    for(i = 0; i < 5; i++){
        scanf("%d",&n);
        if(n%2==0){
            n_par++;
        }
        if(n%2!=0){
            n_impar++;
        }
        if(n>0){
            n_posi++;
        }
        if(n<0){
            n_neg++;
        }
    }
    printf("%d valor(es) par(es)\n",n_par);
    printf("%d valor(es) impar(es)\n",n_impar);
    printf("%d valor(es) positivo(s)\n",n_posi);
    printf("%d valor(es) negativo(s)\n",n_neg);
return 0;
}
