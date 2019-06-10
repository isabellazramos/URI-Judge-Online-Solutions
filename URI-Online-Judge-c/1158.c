#include <stdio.h>

int main() {
    int num_casos,i,j,k,n,soma;
    soma=0;
    scanf("%d",&num_casos);
    for(j=0;j<num_casos;j++){
        scanf("%d",&n);
        scanf("%d",&i);
        for(k=0;k<i;k++){
            if(n % 2 !=0){
                soma +=n;
                n = n+2;
            }
            else{
                n = n+1;
                soma+=n;
                n = n+2;
            }
        }
        printf("%d\n",soma);
        soma = 0;
    }
    return 0;
}
